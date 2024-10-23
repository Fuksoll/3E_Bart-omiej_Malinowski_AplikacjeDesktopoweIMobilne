using System;
using System.Diagnostics.CodeAnalysis;
public class zadanka
{
    public static void Main(string[] args)
    {
        //z1

        while (true)
        {

            Console.WriteLine("podaj liczbe wiekszą od 1: ");
            int n = int.Parse(Console.ReadLine());

            if (n > 1)
            {
                while (n <= 0)
                {
                    if (n % 3 == 0)
                    {
                        Console.WriteLine(n + ",");
                        n++;
                    }


                }
            }
            else if (n < 1)
            {
                Console.WriteLine("błąd wprowadz liczbę wiekszą od 1");
            }
        }
    }
}