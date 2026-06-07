using MySql.Data.MySqlClient;
using System;

namespace lab8i
{
    public class CustomerDelete
    {
        static void Main(string[] args)
        {
            string con =
                "server=localhost;port=3336;database=bank;uid=root;password=;";

            MySqlConnection conn = new MySqlConnection(con);

            string deletequery =
                "DELETE FROM customer WHERE depositamount < 500;";

            conn.Open();

            MySqlCommand cmd = new MySqlCommand(deletequery, conn);

            int row = cmd.ExecuteNonQuery();

            if (row > 0)
                Console.WriteLine(row + " Rows Deleted Successfully (Deposit < 500)");
            else
                Console.WriteLine("No records found with deposit < 500");

            conn.Close();

            Console.ReadKey();
        }
    }
}