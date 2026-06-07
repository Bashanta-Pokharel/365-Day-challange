using MySql.Data.MySqlClient;
using System;

namespace lab8i
{
    public class CustomerInsert
    {
        static void Main(string[] args)
        {
            string con =
                "server=localhost;port=3336;database=bank;uid=root;password=;";

            MySqlConnection conn = new MySqlConnection(con);

            string insertquery =
                "INSERT INTO customer(accountno, name, address, depositamount) VALUES " +
                "(101, 'Basanta', 'Kathmandu', 1000)," +
                "(102, 'Sweekriti', 'Lalitpur', 300)," +
                "(103, 'Asish', 'Bhaktapur', 700)," +
                "(104, 'Amit', 'Kirtipur', 400)," +
                "(105, 'Kausal', 'Pokhara', 1200);";

            conn.Open();

            MySqlCommand cmd = new MySqlCommand(insertquery, conn);

            int row = cmd.ExecuteNonQuery();

            if (row > 0)
                Console.WriteLine(row + " Rows Inserted Successfully");
            else
                Console.WriteLine("Error in the insertion");

            conn.Close();

            Console.ReadKey();
        }
    }
}