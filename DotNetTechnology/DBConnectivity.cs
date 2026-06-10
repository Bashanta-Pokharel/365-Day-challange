using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.UI;
using System.Web.UI.WebControls;
using MySql.Data.MySqlClient;
using System.Data;
namespace DBExample
{
    public partial class DBForm : System.Web.UI.Page
    {
        string constr = "server=localhost;port=3337;database=bca;uid=root;password='';";
        MySqlConnection con;
        MySqlCommand cmd;
        protected void Page_Load(object sender, EventArgs e)
        {
            con= new MySqlConnection(constr);
            con.Open();
            string sql = "select * from student";
            cmd = new MySqlCommand(sql, con);

            MySqlDataAdapter adapter = new MySqlDataAdapter(cmd);
            DataTable dt = new DataTable();
            adapter.Fill(dt);
            result.DataSource = dt;
            result.DataBind();
            con.Close();
        }

        protected void btninsert_Click(object sender, EventArgs e)
        {

        }

        protected void btninsert_Click1(object sender, EventArgs e)
        {
            con.Open();
            int roll = int.Parse(txtroll.Text);
            string name=txtname.Text;
            string addr = txtadd.Text;

            string sql = "insert into student values ('" + roll + "','" + name + "','" + addr + "')";
            cmd=new MySqlCommand(sql, con);
            int row= cmd.ExecuteNonQuery();
            if (row > 0)
                Response.Write("<h2>Inseert Successfully</h2>");
            else
                Response.Write("<h2>Error in Inseert</h2>");
            con.Close();
        }
    }
}

