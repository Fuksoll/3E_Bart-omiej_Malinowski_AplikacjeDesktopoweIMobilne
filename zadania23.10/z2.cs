using System;
using System.Diagnostics.CodeAnalysis;
public class zadanka
{
    public static void Main(string[] args)
    {
        while{
            Console.WriteLine("Podaj liczbe dziesietną: ");
            int ldzi = int.Parse(Console.ReadLine());
            string lbin = Convert.ToString(ldzi, 2);
            Console.WriteLine("liczba binarna: " + lbin);
        }
    }
}