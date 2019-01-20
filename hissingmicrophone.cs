// https://open.kattis.com/problems/hissingmicrophone

using System;

namespace HissingMicrophone
{
    class hissingmicrophone
    {
        static void Main(string[] args)
        {
            var input = Console.ReadLine();
            if(input.Contains("ss")){
                Console.WriteLine("hiss");
            }else{
                Console.WriteLine("no hiss");
            }
		}
    }
}
