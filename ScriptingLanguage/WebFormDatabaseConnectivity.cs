using MySql.Data.MySqlClient;
using System;
using System.Data;

namespace tryingwebform
{
    public partial class WebFormDatabaseConnectivity : System.Web.UI.Page
    {
        string con = "server=localhost;port=3336;database=bank;uid=root;password=;";

        protected void Page_Load(object sender, EventArgs e)
        {
            if (!IsPostBack)
            {
                LoadCustomers(); // show data when page loads
            }
        }

        protected void btnSave_Click(object sender, EventArgs e)
        {
            string accountno = txtAccountNo.Text;
            string name = txtName.Text;
            string address = txtAddress.Text;
            string depositamount = txtDeposit.Text;

            MySqlConnection conn = new MySqlConnection(con);

            string query = "INSERT INTO customer(accountno,name,address,depositamount) VALUES('"
                            + accountno + "','"
                            + name + "','"
                            + address + "','"
                            + depositamount + "')";

            MySqlCommand cmd = new MySqlCommand(query, conn);

            conn.Open();
            cmd.ExecuteNonQuery();
            conn.Close();

            lblResult.Text = "Record Inserted Successfully";

            txtAccountNo.Text = "";
            txtName.Text = "";
            txtAddress.Text = "";
            txtDeposit.Text = "";

            LoadCustomers(); // refresh grid after insert
        }

        private void LoadCustomers()
        {
            MySqlConnection conn = new MySqlConnection(con);

            string query = "SELECT * FROM customer";

            MySqlCommand cmd = new MySqlCommand(query, conn);

            MySqlDataAdapter da = new MySqlDataAdapter(cmd);
            DataTable dt = new DataTable();

            da.Fill(dt);

            gvCustomers.DataSource = dt;
            gvCustomers.DataBind();
        }
    }
}