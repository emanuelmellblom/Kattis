//https://open.kattis.com/problems/heartrate

using System;
using System.Collections.Generic;

namespace HeartRate
{
    class Program
    {
        static void Main(string[] args)
        {
            int numInputLines = Int32.Parse(Console.ReadLine());
            var computedResults = new List<Tuple<double, double, double>>();

            for (int i = 0; i < numInputLines; i++){
                var tmpInput = Console.ReadLine().Split(' ');
                double b = double.Parse(tmpInput[0]);
                double p = double.Parse(tmpInput[1]);
                double value = 60 / p;

                double BPM = value * b;
                computedResults.Add(Tuple.Create(BPM - value, BPM, BPM + value));
            }
            foreach(var item in computedResults){
                Console.WriteLine($"{item.Item1.ToString("#.####")} {item.Item2.ToString("#.####")} {item.Item3.ToString("#.####")}");
            }
        }
    }
}
