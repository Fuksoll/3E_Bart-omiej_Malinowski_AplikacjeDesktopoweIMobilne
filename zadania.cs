using System;
public class zadanka
{
    public static void Main(string[] args)
    {
        //z1
        Console.WriteLine("Witaj świecie");
        //z2
        string imie;
        Console.WriteLine("Nazywasz się? ");
        imie = Console.ReadLine();
        Console.WriteLine("Nazywam się " + imie);
        //z3
        Console.WriteLine("Liczba1 ");
        string a = Console.ReadLine();
        Console.WriteLine("Liczba2 ");
        string b = Console.ReadLine();
        int aa = Convert.ToInt32(a);
        int bb = Convert.ToInt32(b);
        Console.WriteLine(aa + bb);
        //z4
        Console.WriteLine("podaj promien kola");
        var p = Console.ReadLine();
        double r = Convert.ToDouble(p);
        Console.WriteLine("Powierzchnia kola wynosi: " + (3.14 * r * r));
        //z5
        Console.WriteLine("podaj stopnie celcjusza: ");
        double celsjusz = Convert.ToDouble(Console.ReadLine());
        Console.WriteLine("przemiana na fahrenheita: " + ((celsjusz * 9/5) + 32)); 
        
        //z6
        Console.WriteLine("podaj liczbę całkowitą: ");
        int d = Convert.ToInt32(Console.ReadLine());
        string e = Convert.ToString(d);
        Console.WriteLine("wynik: " + e);
        //z7
        Console.WriteLine("Podaj 2 liczby: ");
        double l1 = int.Parse(Console.ReadLine());
        double l2 = int.Parse(Console.ReadLine());
        Console.WriteLine(((l1 + l2) / 2));
        //z8
        Console.WriteLine("Podaj liczbe: ");
        double k = int.Parse(Console.ReadLine());
        Console.WriteLine("kwadrat liczby wynosi: " + Math.Pow(k, 2));
        //z9
        float f = float.Parse(Console.ReadLine());
        int z = Convert.ToInt32(f);
        Console.WriteLine(z);
    }
}

