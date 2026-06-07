using MySql.Data.MySqlClient;
using System;

namespace lab8i
{
    public class CustomerUpdate
    {
        static void Main(string[] args)
        {
            string con =
                "server=localhost;port=3336;database=bank;uid=root;password=;";

            MySqlConnection conn = new MySqlConnection(con);

            string updatequery =
                "UPDATE customer SET " +
                "address = 'Jorpati', " +
                "depositamount = 2000 " +
                "WHERE accountno = 101;";

            conn.Open();

            MySqlCommand cmd = new MySqlCommand(updatequery, conn);

            int row = cmd.ExecuteNonQuery();

            if (row > 0)
                Console.WriteLine(row + " Row Updated Successfully");
            else
                Console.WriteLine("No Record Found to Update");

            conn.Close();

            Console.ReadKey();
        }
    }
}