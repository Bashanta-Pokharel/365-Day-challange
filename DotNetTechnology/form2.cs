using System;
using System.Web.UI.WebControls;

namespace tryingwebform
{
    public partial class WebFormValidate : System.Web.UI.Page
    {
        protected void Page_Load(object sender, EventArgs e)
        {

        }

        protected void cv1_ServerValidate(object source, ServerValidateEventArgs args)
        {
            string password = args.Value;

            if (password.Length > 5)
            {
                args.IsValid = true;
            }
            else
            {
                args.IsValid = false;
            }
        }

        protected void btnsubmit_Click(object sender, EventArgs e)
        {
            string fname = txtname.Text;
            string email = txtemail.Text;
            string pass = password.Text;
            string cpass = conformPassword.Text;
            string age = textage.Text;
            result.Text = "Name : " + fname + "<br/>" +
                          "Email : " + email + "<br/>" +
                          "Password : " + pass + "<br/>" +
                          "Confirm Password : " + cpass + "<br/>" +
                          "Age : " + age;
        }
    }
}