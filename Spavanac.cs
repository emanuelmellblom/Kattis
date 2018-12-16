//https://open.kattis.com/problems/spavanac
using System;

namespace Spavanac
{
    class Program
    {
        static void Main(string[] args)
        {
            var inputTime = Console.ReadLine().Split(' ');
            int hour = Int16.Parse(inputTime[0]);
            int minutes = Int16.Parse(inputTime[1]) - 45;
            if(minutes < 0){
                minutes += 60;
                hour--;
            }
            if (hour < 0) hour = 23;
            Console.WriteLine($"{hour} {minutes}");
        }
    }
}
