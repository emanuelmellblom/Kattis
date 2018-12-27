//https://open.kattis.com/problems/detaileddifferences

using System;
using System.Collections.Generic;

namespace DetailedDifferences
{
    public class Program
    {
        static void Main(string[] args)
        {
            var numInputs = Int32.Parse(Console.ReadLine());
            var inputs = new List<Tuple<string, string>>();

            for (int i = 0; i < numInputs; i++){
                var tmp1 = Console.ReadLine();
                var tmp2 = Console.ReadLine();
                var tmpTuple= Tuple.Create(tmp1, tmp2);
                inputs.Add(tmpTuple);
            }

            string output = "";
            foreach(var item in inputs){
                for (int i = 0; i < item.Item1.Length; i++){
                    output += item.Item1[i] == item.Item2[i] ? '.' : '*';
                }
                Console.WriteLine(item.Item1 + '\n' + item.Item2 + '\n' + output + '\n');
                output = "";
            }
        }
    }
}
