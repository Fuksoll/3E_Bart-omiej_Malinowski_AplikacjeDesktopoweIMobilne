using System;
using System.Diagnostics.CodeAnalysis;
public class zadanka
{
    public static void Main(string[] args)
    {
        
        //z1
        for (int i = 1; i <= 10; i++)
        {
        Console.WriteLine(i);
        }
        //z2
        for (int i = 100; i >= 50; i--)
        {
            Console.WriteLine(i);
        }
        //z3
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
        }while(l != 0);

        Console.WriteLine("suma liczb: " + sum);
        Console.WriteLine("ilosc wprowadzonych liczb: " + s);

        //z4
        Console.WriteLine("podaj pierwszą liczbe: ");
        int l1 = int.Parse(Console.ReadLine());
        Console.WriteLine("podaj drugą liczbe: ");
        int l2 = int.Parse(Console.ReadLine());

        if(l1 < l2)
        {
            Console.WriteLine($"liczby podzielne przez 3 z przedzialu {l1} - {l2}:");
            for (int i = l1; i <= l2; i++)
            {
                if (i % 3 == 0)
                {
                    Console.WriteLine(i);
                }
            }
        }
        else
        {
            Console.WriteLine("pierwsza musi byc mniejsza od drugiej liczby: ");
        }
        //z5
        Console.WriteLine("Podaj liczbe dziesietną: ");
        int ldzi = int.Parse(Console.ReadLine());
        string lbin = Convert.ToString(ldzi, 2);
        Console.WriteLine("liczba binarna: " + lbin);
        //z6
        
        Console.WriteLine("Podaj wysokosc trojkąta: ");
        int h = int.Parse(Console.ReadLine());

        for(int i = h; i > 0; i--)
        {
            for (int j = 0; j < i; j++)
            {
                Console.Write("*");
            }
            Console.WriteLine();
        }
    }
}