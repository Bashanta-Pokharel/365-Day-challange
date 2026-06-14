using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.UI;
using System.Web.UI.WebControls;

namespace lab9
{
    public partial class question3 : System.Web.UI.Page
    {
        protected void Page_Load(object sender, EventArgs e)
        {

        }
        protected void btnsubmit_Click(object sender, EventArgs e)
        {
            if (Page.IsValid)
            {
                result.Text =
                    "Registration Successful <br/><br/>" +
                    "Name : " + txtname.Text + "<br/>" +
                    "Email : " + txtemail.Text + "<br/>" +
                    "Password : " + txtpassword.Text + "<br/>" +
                    "Age : " + txtage.Text + "<br/>" +
                    "Phone Number : " + txtphone.Text;
            }
        }
    }
}