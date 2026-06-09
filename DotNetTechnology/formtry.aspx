<%@ Page Language="C#" AutoEventWireup="true" CodeBehind="WebFormValidation.aspx.cs" Inherits="tryingwebform.WebFormValidation" %>

<!DOCTYPE html>

<html xmlns="http://www.w3.org/1999/xhtml">
<head runat="server">
    <title></title>
</head>
<body>
    <form id="form1" runat="server">
       <fieldset>
           <legend>this is the validation</legend>
            <asp:Label ID="l1" runat="server">Username</asp:Label>
            <asp:TextBox ID="txtname" runat="server"></asp:TextBox>

            

            <asp:Label ID="l2" runat="server">Password</asp:Label>
            <asp:TextBox ID="txtpass" runat="server" TextMode="Password"></asp:TextBox>

       </fieldset>
    </form>
</body>
</html>
