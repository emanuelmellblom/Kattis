using System;
using System.Collections.Generic;

namespace Ive_Been_Everywhere_Man
{
    class Program
    {
        static void Main(string[] args)
        {
            int numberOfInputs = Int32.Parse(Console.ReadLine());
            List<int> outPut = new List<int>();
            HashSet<string> tmpCollection = new HashSet<string>();

            for (int i = 0; i < numberOfInputs; i++){
                int len = Int32.Parse(Console.ReadLine());
                for (int x = 0; x < len; x++){
                    tmpCollection.Add(Console.ReadLine());
                }
                outPut.Add(tmpCollection.Count);
                tmpCollection.Clear();
            }
            foreach(int value in outPut){
                Console.WriteLine(value);
            }
        }
    }
}
