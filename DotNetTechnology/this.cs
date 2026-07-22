using System;

namespace lab6
{
    public class TimeOperatorOverloading
    {

        // ---------------- TIME CLASS ----------------
        public class Time
        {
            int hours, minutes, seconds;

            public Time()
            {

            }

            public Time(int hours, int minutes, int seconds)
            {
                this.hours = hours;
                this.minutes = minutes;
                this.seconds = seconds;
            }


            public void displayTime()
            {
                Console.WriteLine("Time: " + hours + ":" + minutes + ":" + seconds);
            }


            // Addition of two time objects
            public static Time operator +(Time t1, Time t2)
            {
                Time t = new Time();

                t.seconds = t1.seconds + t2.seconds;
                t.minutes = t1.minutes + t2.minutes;
                t.hours = t1.hours + t2.hours;


                if (t.seconds >= 60)
                {
                    t.minutes++;
                    t.seconds = t.seconds - 60;
                }


                if (t.minutes >= 60)
                {
                    t.hours++;
                    t.minutes = t.minutes - 60;
                }


                return t;
            }


            // Comparing two time objects
            public static bool operator ==(Time t1, Time t2)
            {
                return (t1.hours == t2.hours &&
                        t1.minutes == t2.minutes &&
                        t1.seconds == t2.seconds);
            }


            public static bool operator !=(Time t1, Time t2)
            {
                return !(t1 == t2);
            }

        }



        // ---------------- MAIN METHOD ----------------
        static void Main(string[] args)
        {

            // TIME ADDITION

            Time t1 = new Time(20, 30, 40);
            Time t2 = new Time(10, 45, 30);


            Console.WriteLine("First Time:");
            t1.displayTime();


            Console.WriteLine("Second Time:");
            t2.displayTime();


            Time t3 = t1 + t2;


            Console.WriteLine("\nAfter Addition:");
            t3.displayTime();



            // TIME COMPARISON

            Time t4 = new Time(10, 30, 40);
            Time t5 = new Time(10, 30, 40);


            Console.WriteLine("\nComparing Two Times:");

            t4.displayTime();
            t5.displayTime();


            if (t4 == t5)
            {
                Console.WriteLine("Both times are equal.");
            }
            else
            {
                Console.WriteLine("Both times are not equal.");
            }


            Console.ReadKey();
        }
    }
}