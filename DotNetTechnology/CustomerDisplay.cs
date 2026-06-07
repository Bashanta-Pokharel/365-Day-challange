using MySql.Data.MySqlClient;
using System;

namespace lab8i
{
    public class CustomerDisplay
    {
        static void Main(string[] args)
        {
            string con =
                "server=localhost;port=3336;database=bank;uid=root;password=;";

            MySqlConnection conn = new MySqlConnection(con);

            string query = "SELECT * FROM customer;";

            conn.Open();

            MySqlCommand cmd = new MySqlCommand(query, conn);

            MySqlDataReader reader = cmd.ExecuteReader();

            Console.WriteLine("AccountNo\tName\tAddress\tDepositAmount");
            Console.WriteLine("------------------------------------------------");

            while (reader.Read())
            {
                Console.WriteLine(
                    reader["accountno"] + "\t" +
                    reader["name"] + "          " +
                    reader["address"] + "          " +
                    reader["depositamount"]);
            }

            conn.Close();

            Console.ReadKey();
        }
    }
}