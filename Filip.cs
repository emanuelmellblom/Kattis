using System;
// Problem Filip read, reverse and compare numbers

namespace Kattis_Programming_Problems
{
    class Program
    {
        static void Main(string[] args)
        {
            string input = Console.ReadLine();
            var separatedInput = input.Split(' ');
            Console.WriteLine(Int32.Parse(Reverse(separatedInput[0])) > Int32.Parse(Reverse(separatedInput[1])) ? Int32.Parse(Reverse(separatedInput[0])) : Int32.Parse(Reverse(separatedInput[1])));
        }

        public static string Reverse(string toConvert){
            char[] asArray = toConvert.ToCharArray();
            Array.Reverse(asArray);
            return new string(asArray);
        }
    }
}
