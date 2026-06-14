<%@ Page Language="C#" AutoEventWireup="true" CodeBehind="question3.aspx.cs" Inherits="lab9.question3" %>

<!DOCTYPE html>

<html xmlns="http://www.w3.org/1999/xhtml">
<head runat="server">
    <title></title>
</head>
<body>
<form id="form1" runat="server">

<fieldset>
<legend>Student Registration Form</legend>

<div style="display:flex; gap:5px;">

<div style="width:30%;">

Name:
<asp:TextBox ID="txtname" runat="server"></asp:TextBox>
<asp:RequiredFieldValidator ID="rfv1" runat="server"
    ControlToValidate="txtname"
    ErrorMessage="Name is required"
    ForeColor="Red" />
<asp:RegularExpressionValidator ID="revname" runat="server"
    ControlToValidate="txtname"
    ErrorMessage="Only letters and spaces allowed"
    ValidationExpression="^[A-Za-z ]+$"
    ForeColor="Red" />
<br /><br />

Email:
<asp:TextBox ID="txtemail" runat="server"></asp:TextBox>
<asp:RequiredFieldValidator ID="rfv2" runat="server"
    ControlToValidate="txtemail"
    ErrorMessage="Email is required"
    ForeColor="Red" />
<asp:RegularExpressionValidator ID="revemail" runat="server"
    ControlToValidate="txtemail"
    ErrorMessage="Invalid email format"
    ValidationExpression="\w+([-+.'']\w+)*@\w+([-.]\w+)*\.\w+([-.]\w+)*"
    ForeColor="Red" />
<br /><br />

Password:
<asp:TextBox ID="txtpassword" runat="server" TextMode="Password"></asp:TextBox>
<asp:RequiredFieldValidator ID="rfv3" runat="server"
    ControlToValidate="txtpassword"
    ErrorMessage="Password is required"
    ForeColor="Red" />
<br /><br />

Confirm Password:
<asp:TextBox ID="txtconfirm" runat="server" TextMode="Password"></asp:TextBox>
<asp:RequiredFieldValidator ID="rfv4" runat="server"
    ControlToValidate="txtconfirm"
    ErrorMessage="Confirm password required"
    ForeColor="Red" />
<asp:CompareValidator ID="cv1" runat="server"
    ControlToValidate="txtconfirm"
    ControlToCompare="txtpassword"
    ErrorMessage="Passwords do not match"
    ForeColor="Red" />
<br /><br />

Age:
<asp:TextBox ID="txtage" runat="server"></asp:TextBox>
<asp:RequiredFieldValidator ID="rfv5" runat="server"
    ControlToValidate="txtage"
    ErrorMessage="Age is required"
    ForeColor="Red" />
<asp:RegularExpressionValidator ID="revage" runat="server"
    ControlToValidate="txtage"
    ErrorMessage="Only numbers allowed"
    ValidationExpression="^\d+$"
    ForeColor="Red" />
<asp:RangeValidator ID="rv1" runat="server"
    ControlToValidate="txtage"
    MinimumValue="18"
    MaximumValue="60"
    Type="Integer"
    ErrorMessage="Age must be 18-60"
    ForeColor="Red" />
<br /><br />

Phone Number:
<asp:TextBox ID="txtphone" runat="server"></asp:TextBox>
<asp:RequiredFieldValidator ID="rfv6" runat="server"
    ControlToValidate="txtphone"
    ErrorMessage="Phone is required"
    ForeColor="Red" />
<asp:RegularExpressionValidator ID="revphone" runat="server"
    ControlToValidate="txtphone"
    ErrorMessage="Enter 10 digit number"
    ValidationExpression="^[0-9]{10}$"
    ForeColor="Red" />
<br /><br />

<asp:Button ID="btnsubmit" runat="server"
    Text="Submit"
    OnClick="btnsubmit_Click" />

</div>

<div style="width:40%;">
<fieldset>
<legend>Registration Details</legend>

<asp:ValidationSummary ID="ValidationSummary1"
    runat="server"
    ForeColor="Red" />

<asp:Label ID="result"
    runat="server"
    ForeColor="Green"></asp:Label>

</fieldset>
</div>

</div>
</fieldset>

</form>
</body>
</html>