using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.UI;
using System.Web.UI.WebControls;

namespace lab9
{
    public partial class question1 : System.Web.UI.Page
    {
        protected void Page_Load(object sender, EventArgs e)
        {

        }
        
protected void btnSubmit_Click(object sender, EventArgs e)
        {
            string name = txtName.Text;
            string email = txtEmail.Text;

            string gender = "";
            if (rbMale.Checked)
                gender = "Male";
            else if (rbFemale.Checked)
                gender = "Female";

            // FIXED HOSTEL LOGIC (because you used Yes/No checkbox)
            string hostel = "";
            if (chkHostel.Checked)
                hostel = "Yes";
            else if (CheckBox1.Checked)
                hostel = "No";

            string skills = "";
            foreach (ListItem item in cblSkills.Items)
            {
                if (item.Selected)
                    skills += item.Text + " ";
            }

            string semester = "";
            if (rblSemester.SelectedItem != null)
                semester = rblSemester.SelectedItem.Text;

            string department = ddlDept.SelectedItem.Text;

            string subjects = "";
            foreach (ListItem item in lstSubjects.Items)
            {
                if (item.Selected)
                    subjects += item.Text + " ";
            }

            string batch = "";
            if (Calendar1.SelectedDate != DateTime.MinValue)
                batch = Calendar1.SelectedDate.ToShortDateString();

            result.Text =
                "Name : " + name + "<br/>" +
                "Email : " + email + "<br/>" +
                "Gender : " + gender + "<br/>" +
                "Hostel : " + hostel + "<br/>" +
                "Skills : " + skills + "<br/>" +
                "Semester : " + semester + "<br/>" +
                "Department : " + department + "<br/>" +
                "Subjects : " + subjects + "<br/>" +
                "Batch : " + batch;
        }
    }
}