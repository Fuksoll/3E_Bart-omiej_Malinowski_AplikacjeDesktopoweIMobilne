using System;
using System.Diagnostics.CodeAnalysis;
public class zadanka
{
    public static void Main(string[] args)
    {

        Random l = new Random();
        int rand = l.Next(11);

        int n = 0;
        while (n <= 10)
        {
            Console.WriteLine("zgaduj liczbe od 1 do 10: ");
            int x = int.Parse(Console.ReadLine());
            if (x == rand)
            {
                Console.WriteLine("brawo zgadles liczbe: " + rand);
            }
            else if(x != rand)
            {
               Console.WriteLine("próboj dalej: ");
            }
            n++;
            Console.WriteLine("ilość prob: " + n);
        }
    }
}