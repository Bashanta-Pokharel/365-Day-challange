<%@ Page Language="C#" AutoEventWireup="true" CodeBehind="WebFormDatabaseConnectivity.aspx.cs" Inherits="tryingwebform.WebFormDatabaseConnectivity" %>

<!DOCTYPE html>

<html xmlns="http://www.w3.org/1999/xhtml">
<head runat="server">
    <title>Database Connectivity</title>
</head>
<body>
    <form id="form1" runat="server">

        <fieldset>
            <legend>Customer Information</legend>

            <asp:Label ID="lblAcc" runat="server" Text="Account No"></asp:Label>
            <asp:TextBox ID="txtAccountNo" runat="server"></asp:TextBox>
            <asp:RequiredFieldValidator ID="rfvAcc" runat="server" ControlToValidate="txtAccountNo" ErrorMessage="Account No Required" ForeColor="Red"></asp:RequiredFieldValidator>

            <br /><br />

            <asp:Label ID="lblName" runat="server" Text="Name"></asp:Label>
            <asp:TextBox ID="txtName" runat="server"></asp:TextBox>
            <asp:RequiredFieldValidator ID="rfvName" runat="server" ControlToValidate="txtName" ErrorMessage="Name Required" ForeColor="Red"></asp:RequiredFieldValidator>
            <asp:RegularExpressionValidator ID="regName" runat="server" ControlToValidate="txtName" ValidationExpression="^[A-Za-z ]+$" ErrorMessage="Only letters allowed" ForeColor="Red"></asp:RegularExpressionValidator>

            <br /><br />

            <asp:Label ID="lblAddress" runat="server" Text="Address"></asp:Label>
            <asp:TextBox ID="txtAddress" runat="server"></asp:TextBox>
            <asp:RequiredFieldValidator ID="rfvAddress" runat="server" ControlToValidate="txtAddress" ErrorMessage="Address Required" ForeColor="Red"></asp:RequiredFieldValidator>

            <br /><br />

            <asp:Label ID="lblDeposit" runat="server" Text="Deposit Amount"></asp:Label>
            <asp:TextBox ID="txtDeposit" runat="server"></asp:TextBox>
            <asp:RequiredFieldValidator ID="rfvDeposit" runat="server" ControlToValidate="txtDeposit" ErrorMessage="Deposit Required" ForeColor="Red"></asp:RequiredFieldValidator>
            <asp:RangeValidator ID="rvDeposit" runat="server" ControlToValidate="txtDeposit" MinimumValue="100" MaximumValue="1000000" Type="Double" ErrorMessage="Deposit must be between 100 and 1000000" ForeColor="Red"></asp:RangeValidator>

            <br /><br />

            <asp:Button ID="btnSave" runat="server" Text="Save" OnClick="btnSave_Click" />

            <br /><br />

            <asp:ValidationSummary ID="ValidationSummary1" runat="server" ForeColor="Red" />

            <br />

            <asp:Label ID="lblResult" runat="server" ForeColor="Green"></asp:Label>

        </fieldset>
        <fieldset>
            <legend>All Customer Records</legend>

            <asp:GridView ID="gvCustomers" runat="server" AutoGenerateColumns="True"
                Width="100%" BorderColor="Black" BorderWidth="1px">
            </asp:GridView>

</fieldset>

    </form>
</body>
</html>