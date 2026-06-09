<%@ Page Language="C#" AutoEventWireup="true" CodeBehind="WebFormValidate.aspx.cs" Inherits="tryingwebform.WebFormValidate" %>

<!DOCTYPE html>

<html xmlns="http://www.w3.org/1999/xhtml">
<head runat="server">
    <title>Form Validation</title>
</head>
<body>
    <form id="form1" runat="server">
        <fieldset>
            <legend>form validation</legend>

            <asp:Label ID="l1" runat="server">full name</asp:Label>
            <asp:TextBox ID="txtname" runat="server"></asp:TextBox>

            <asp:RequiredFieldValidator
                ID="RequiredFieldValidatorName"
                runat="server"
                ControlToValidate="txtname"
                ErrorMessage="Name is required"
                ForeColor="Red">
            </asp:RequiredFieldValidator>

            <asp:RegularExpressionValidator
                ID="reg1"
                runat="server"
                ControlToValidate="txtname"
                ErrorMessage="Only letters and spaces allowed"
                ValidationExpression="^[A-Za-z ]+$"
                ForeColor="Red">
            </asp:RegularExpressionValidator>

            <br /><br />

            <asp:Label ID="l2" runat="server">Email</asp:Label>
            <asp:TextBox ID="txtemail" runat="server"></asp:TextBox>

            <asp:RequiredFieldValidator
                ID="RequiredFieldValidator1"
                runat="server"
                ControlToValidate="txtemail"
                ErrorMessage="Email is required"
                ForeColor="Red">
            </asp:RequiredFieldValidator>

            <asp:RegularExpressionValidator
                ID="RegularExpressionValidator1"
                runat="server"
                ControlToValidate="txtemail"
                ErrorMessage="Invalid Email"
                ValidationExpression="\w+([-+.']\w+)*@\w+([-.]\w+)*\.\w+([-.]\w+)*"
                ForeColor="Red">
            </asp:RegularExpressionValidator>

            <br /><br />

            <asp:Label ID="l3" runat="server">Password</asp:Label>
            <asp:TextBox ID="password" runat="server" TextMode="Password"></asp:TextBox>

            <asp:CustomValidator
                ID="cv1"
                runat="server"
                ControlToValidate="password"
                ErrorMessage="Password must be more than 5 characters"
                ForeColor="Red"
                OnServerValidate="cv1_ServerValidate">
            </asp:CustomValidator>

            <br /><br />

            <asp:Label ID="l4" runat="server">Confirm Password</asp:Label>
            <asp:TextBox ID="conformPassword" runat="server" TextMode="Password"></asp:TextBox>

            <asp:CompareValidator
                ID="CompareValidator1"
                runat="server"
                ControlToValidate="conformPassword"
                ControlToCompare="password"
                ErrorMessage="Password does not match"
                ForeColor="Red">
            </asp:CompareValidator>

            <br /><br />

            <asp:Label ID="l5" runat="server">Age</asp:Label>
            <asp:TextBox ID="textage" runat="server"></asp:TextBox>

            <asp:RequiredFieldValidator
                ID="ref4"
                runat="server"
                ControlToValidate="textage"
                ErrorMessage="Age is required"
                ForeColor="Red">
            </asp:RequiredFieldValidator>

            <asp:RangeValidator
                ID="RangeValidator1"
                runat="server"
                ControlToValidate="textage"
                MinimumValue="18"
                MaximumValue="60"
                Type="Integer"
                ErrorMessage="Age must be between 18 and 60"
                ForeColor="Red">
            </asp:RangeValidator>

            <br /><br />

            <asp:Button
                ID="btnsubmit"
                runat="server"
                Text="Submit"
                OnClick="btnsubmit_Click" />

            <br /><br />

            <asp:ValidationSummary
                ID="ValidationSummary1"
                runat="server"
                ForeColor="Red" />

            <br />

            <asp:Label
                ID="result"
                runat="server"
                ForeColor="Green">
            </asp:Label>

        </fieldset>
    </form>
</body>
</html>