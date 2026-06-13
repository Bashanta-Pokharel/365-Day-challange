using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.UI;
using System.Web.UI.WebControls;

namespace lab9
{
    public partial class question2 : System.Web.UI.Page
    {
        protected void Page_Load(object sender, EventArgs e)
        {

        }
        protected void btnLogin_Click(object sender, EventArgs e)
        {
            string username = txtUser.Text;
            string password = txtPass.Text;

            // Simple hardcoded login
            if (username == "admin" && password == "1234")
            {
                Response.Redirect("question2welcome.aspx");
            }
            else
            {
                lblMsg.Text = "Invalid Username or Password!";
            }
        }
    }
}