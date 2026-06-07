using System;
using System.Collections.Generic;
using System.Linq;

namespace lab8i
{
	class LinqIenumerable
	{
		static void Main(string[] args)
		{
			int[] num =
			{
				1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,
				17,18,19,20,21,22,23,24,25,26,27,28,29,30
			};

			Console.WriteLine("The array contains:");
			foreach (int n in num)
				Console.Write(n + " ");

			IEnumerable<int> dr =
				from n in num
				where n % 2 != 0 && n % 3 == 0
				select n;

			Console.WriteLine("\nThe numbers which are odd and divisible by 3 using Ienumerable of LINQ are :");

			foreach (int n in dr)
			{
				Console.Write(n + " ");
			}

			Console.ReadKey();
		}
	}
}