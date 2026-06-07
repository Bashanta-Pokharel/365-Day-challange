using System;
using System.Linq;

namespace lab8i
{
    public class LinqAggregation
    {
        public static void Display()
        {
            int[] A = { 10, 20, 30, 40, 50, 60 };
            int[] B = { 40, 50, 60, 70, 80, 90 };
            int[] C = { 5, 10, 15, 20, 25 };

            Console.WriteLine("Array 1:");
            foreach (int n in A)
                Console.Write(n + " ");

            Console.WriteLine("\n\nArray 2:");
            foreach (int n in B)
                Console.Write(n + " ");

            Console.WriteLine("\n\nArray 3:");
            foreach (int n in C)
                Console.Write(n + " ");

            Console.WriteLine("\n\n");
            Console.WriteLine("AGGREGATION OPERATORS");
            Console.WriteLine("");

            Console.WriteLine("Sum of Array1 = " + A.Sum());
            Console.WriteLine("Average of Array1 = " + A.Average());
            Console.WriteLine("Count of Array1 = " + A.Count());
            Console.WriteLine("LongCount of Array1 = " + A.LongCount());
            Console.WriteLine("Min of Array1 = " + A.Min());
            Console.WriteLine("Max of Array1 = " + A.Max());

            Console.WriteLine("\nAggregate (Product of Array1 Elements)");
            int product = A.Aggregate((a, b) => a * b);
            Console.WriteLine("Product = " + product);

            Console.WriteLine("\n");
            Console.WriteLine("SET OPERATORS");
            Console.WriteLine("");

            Console.WriteLine("\nUnion of Array1 and Array2:");
            var union = A.Union(B);
            foreach (int n in union)
                Console.Write(n + " ");

            Console.WriteLine("\n\nIntersection of Array1 and Array2:");
            var intersection = A.Intersect(B);
            foreach (int n in intersection)
                Console.Write(n + " ");

            Console.WriteLine("\n\nExcept (Array1 - Array2):");
            var except = A.Except(B);
            foreach (int n in except)
                Console.Write(n + " ");

            Console.WriteLine("\n\nConcat of Array1 and Array3:");
            var concat = A.Concat(C);
            foreach (int n in concat)
                Console.Write(n + " ");

            Console.WriteLine("\n\nDistinct Elements:");
            int[] duplicateArray = { 1, 2, 2, 3, 3, 4, 5, 5 };
            foreach (int n in duplicateArray)
                Console.Write(n + " ");

            Console.WriteLine("\nDistinct Result:");
            var distinct = duplicateArray.Distinct();
            foreach (int n in distinct)
                Console.Write(n + " ");

            Console.WriteLine("\n\n");
            Console.WriteLine("QUANTIFIER OPERATORS");
            Console.WriteLine("");

            Console.WriteLine("All > 0 in Array1 : " + A.All(x => x > 0));
            Console.WriteLine("Any > 50 in Array1 : " + A.Any(x => x > 50));
            Console.WriteLine("Contains 40 in Array1 : " + A.Contains(40));

            Console.WriteLine("\n");
            Console.WriteLine("ELEMENT OPERATORS");
            Console.WriteLine("");

            Console.WriteLine("First Element : " + A.First());
            Console.WriteLine("Last Element : " + A.Last());
            Console.WriteLine("ElementAt(2) : " + A.ElementAt(2));
            Console.WriteLine("FirstOrDefault > 100 : " + A.FirstOrDefault(x => x > 100));

            Console.WriteLine("\n");
            Console.WriteLine("PARTITION OPERATORS");
            Console.WriteLine("");

            Console.WriteLine("Take(3):");
            foreach (int n in A.Take(3))
                Console.Write(n + " ");

            Console.WriteLine("\nSkip(3):");
            foreach (int n in A.Skip(3))
                Console.Write(n + " ");

            Console.WriteLine("\n\n");
            Console.WriteLine("SEQUENCE EQUAL");
            Console.WriteLine("");

            int[] arr4 = { 10, 20, 30, 40, 50, 60 };
            Console.WriteLine("Array1 and Array4 Equal? : " +
                              A.SequenceEqual(arr4));
        }
    }
}