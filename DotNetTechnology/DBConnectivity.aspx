
<%@ Page Language="C#" AutoEventWireup="true" CodeBehind="DBForm.aspx.cs" Inherits="DBExample.DBForm" %>

<!DOCTYPE html>

<html xmlns="http://www.w3.org/1999/xhtml">
<head runat="server">
    <title></title>
</head>
<body>
    <form id="form1" runat="server">
       <fieldset>
           <legend>Database Connectivity</legend>
           <asp:Label ID="l1" runat="server" >Enter Roll:</asp:Label><br />
           <asp:TextBox ID="txtroll" runat="server"></asp:TextBox>
           <asp:RequiredFieldValidator ID="rf1" runat="server" ControlToValidate="txtroll" ErrorMessage="Roll is required" ForeColor="Red"></asp:RequiredFieldValidator>
           <asp:RegularExpressionValidator ID="reg1" runat="server" ControlToValidate="txtroll" ErrorMessage="Invalid Roll" ForeColor="Red" ValidationExpression="^[0-9]+$"></asp:RegularExpressionValidator>
           <br /><br />

           <asp:Label ID="l2" runat="server" >Enter name:</asp:Label><br />
           <asp:TextBox ID="txtname" runat="server"></asp:TextBox>
           <asp:RequiredFieldValidator ID="rf2" runat="server" ControlToValidate="txtname" ErrorMessage="Name is required" ForeColor="Red"></asp:RequiredFieldValidator>
           <asp:RegularExpressionValidator ID="reg2" runat="server" ControlToValidate="txtname" ErrorMessage="Invalid name" ForeColor="Red" ValidationExpression="^[a-zA-Z ]+$"></asp:RegularExpressionValidator>
            <br /><br />

           <asp:Label ID="l3" runat="server" >Enter Address:</asp:Label><br />
           <asp:TextBox ID="txtadd" runat="server"></asp:TextBox>
           <asp:RequiredFieldValidator ID="rf3" runat="server" ControlToValidate="txtadd" ErrorMessage="Roll is required" ForeColor="Red"></asp:RequiredFieldValidator>
           <asp:RegularExpressionValidator ID="reg3" runat="server" ControlToValidate="txtadd" ErrorMessage="Invalid Address" ForeColor="Red" ValidationExpression="^[0-9a-zA-Z]+$"></asp:RegularExpressionValidator>
           <br /><br />
           

           <asp:Button ID="btninsert" runat="server" Text="Insert" OnClick="btninsert_Click1" />
           </fieldset>
        <h2>Student Information</h2>
        <asp:GridView ID="result" runat="server"></asp:GridView>
    </form>
</body>
</html>






