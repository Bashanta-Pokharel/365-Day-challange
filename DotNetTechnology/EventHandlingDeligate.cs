using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace lab7
{
    public class EventHandlingDeligate
    {
        public class Person
        {
            public void SendMessage(string name, double op, double np)
            {
                Console.WriteLine($"The share price of {name} is changed from {op} to {np}");
            }
        }

        public delegate void PriceChanged(string name, double op, double np);

        public class StockTicker
        {
            public event PriceChanged pc;

            public string name { get; set; }

            private double price;

            public double Price
            {
                get { return price; }
                set
                {
                    double op = price;
                    price = value;

                    if (pc != null)
                        pc.Invoke(name, op, price);
                }
            }
        }

        public static void Display()
        {
            Person p = new Person();
            StockTicker st = new StockTicker();

            st.name = "NABIL";
            st.Price = 6000;

            st.pc += p.SendMessage;

            st.Price = 8000;
            st.Price = 7500;
        }
    }
}