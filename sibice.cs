//https://open.kattis.com/problems/sibice

using System;
using System.Collections.Generic;

namespace Sibice
{
    class Program
    {
        static void Main(string[] args)
        {
            string firstInputline = Console.ReadLine();
            var input = firstInputline.Split(' ');
            int maxLength = (int)Math.Sqrt((Math.Pow(Int32.Parse(input[1]), 2) + (Math.Pow(Int32.Parse(input[2]), 2))));
            List<int> nums = new List<int>();
            for (int i = 0; i < Int32.Parse(input[0]); i++)
            {
                nums.Add(Int32.Parse(Console.ReadLine()));
            }
            foreach(int n in nums){
                if (n <= maxLength)
                {
                    Console.WriteLine("DA");
                }
                else
                {
                    Console.WriteLine("NE");
                }
            }
        }
    }
}
