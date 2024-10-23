using System;
using System.Diagnostics.CodeAnalysis;
public class zadanka
{
    public static void Main(string[] args)
    {
        int l;
        int sum = 0;
        int s = 0;

        do
        {
            Console.WriteLine("Podaj liczbe aby zakonczyc podaj 0: ");
            l = int.Parse(Console.ReadLine());

            if (l != 0)
            {
                sum += l;
                s++;
            }
        } while (l != 0);

        Console.WriteLine("suma liczb: " + sum);
        Console.WriteLine("ilosc wprowadzonych liczb: " + s);
    }
}