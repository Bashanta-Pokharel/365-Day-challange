using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.UI;
using System.Web.UI.WebControls;
using MySql.Data.MySqlClient;
using System.Data;

namespace lab9
{
    public partial class question4 : System.Web.UI.Page
    {
        string constr = "server=localhost;port=3336;database=bank;uid=root;password='';";
        MySqlConnection con;
        MySqlCommand cmd;

        protected void Page_Load(object sender, EventArgs e)
        {
            con = new MySqlConnection(constr);
            con.Open();
            string sql = "select * from customer";
            cmd = new MySqlCommand(sql, con);

            MySqlDataAdapter adapter = new MySqlDataAdapter(cmd);
            DataTable dt = new DataTable();
            adapter.Fill(dt);
            result.DataSource = dt;
            result.DataBind();
            con.Close();
        }

        protected void btnsave_Click(object sender, EventArgs e)
        {
            con.Open();

            string accountno = txtaccno.Text;
            string name = txtname.Text;
            string address = txtadd.Text;
            string depositamount = txtdeposit.Text;

            string sql = "insert into customer values ('" + accountno + "','" + name + "','" + address + "','" + depositamount + "')";
            cmd = new MySqlCommand(sql, con);
            int row = cmd.ExecuteNonQuery();

            if (row > 0)
            {
                txtaccno.Text = "";
                txtname.Text = "";
                txtadd.Text = "";
                txtdeposit.Text = "";
                Response.Write("<h2>Customer Inserted Successfully</h2>");
            }
            else
            {
                Response.Write("<h2>Error in Insert</h2>");
            }

            con.Close();

            // Refresh GridView
            con = new MySqlConnection(constr);
            con.Open();
            string sql2 = "select * from customer";
            cmd = new MySqlCommand(sql2, con);
            MySqlDataAdapter adapter = new MySqlDataAdapter(cmd);
            DataTable dt = new DataTable();
            adapter.Fill(dt);
            result.DataSource = dt;
            result.DataBind();
            con.Close();
        }
    }
}