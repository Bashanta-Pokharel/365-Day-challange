<%@ Page Language="C#" AutoEventWireup="true" CodeBehind="question4.aspx.cs" Inherits="lab9.question4" %>

<!DOCTYPE html>
<html xmlns="http://www.w3.org/1999/xhtml">
<head runat="server">
    <title>Customer Management</title>
</head>
<body>
<form id="form1" runat="server">

<div style="display:flex; gap:20px; align-items:flex-start;">

    <!-- LEFT SIDE -->
    <div style="width:50%;">
        <fieldset>
            <legend>Customer Information</legend>

            Account No:
            <asp:TextBox ID="txtaccno" runat="server"></asp:TextBox>
            <asp:RequiredFieldValidator ID="rf1" runat="server"
                ControlToValidate="txtaccno"
                ErrorMessage="Account No Required"
                ForeColor="Red" />
            <asp:RegularExpressionValidator ID="reg1" runat="server"
                ControlToValidate="txtaccno"
                ValidationExpression="^\d{16}$"
                ErrorMessage="Account No must be 16 digits"
                ForeColor="Red" />
            <br /><br />

            Name:
            <asp:TextBox ID="txtname" runat="server"></asp:TextBox>
            <asp:RequiredFieldValidator ID="rf2" runat="server"
                ControlToValidate="txtname"
                ErrorMessage="Name Required"
                ForeColor="Red" />
            <asp:RegularExpressionValidator ID="reg2" runat="server"
                ControlToValidate="txtname"
                ValidationExpression="^[A-Za-z ]+$"
                ErrorMessage="Only letters allowed"
                ForeColor="Red" />
            <br /><br />

            Address:
            <asp:TextBox ID="txtadd" runat="server"></asp:TextBox>
            <asp:RequiredFieldValidator ID="rf3" runat="server"
                ControlToValidate="txtadd"
                ErrorMessage="Address Required"
                ForeColor="Red" />
            <br /><br />

            Deposit Amount:
            <asp:TextBox ID="txtdeposit" runat="server"></asp:TextBox>
            <asp:RequiredFieldValidator ID="rf4" runat="server"
                ControlToValidate="txtdeposit"
                ErrorMessage="Deposit Required"
                ForeColor="Red" />
            <asp:RegularExpressionValidator ID="reg4" runat="server"
                ControlToValidate="txtdeposit"
                ValidationExpression="^[0-9]+$"
                ErrorMessage="Invalid Amount"
                ForeColor="Red" />
            <asp:RangeValidator ID="rvDeposit" runat="server"
                ControlToValidate="txtdeposit"
                MinimumValue="100"
                MaximumValue="1000000"
                Type="Double"
                ErrorMessage="Deposit must be between 100 and 1000000"
                ForeColor="Red" />
            <br /><br />

            <asp:Button ID="btnsave" runat="server"
                Text="Save"
                OnClick="btnsave_Click" />
            <br /><br />

            <asp:ValidationSummary ID="ValidationSummary1"
                runat="server"
                ForeColor="Red" />

            <asp:Label ID="lblmsg" runat="server"
                ForeColor="Green"></asp:Label>

        </fieldset>
    </div>

    <!-- RIGHT SIDE -->
    <div style="width:50%;">
        <fieldset>
            <legend>All Customer Records</legend>

            <asp:GridView ID="result" runat="server"
                AutoGenerateColumns="True"
                Width="100%"


                BorderColor="Black"
                BorderWidth="1px">
            </asp:GridView>

        </fieldset>
    </div>

</div>

</form>
</body>
</html>