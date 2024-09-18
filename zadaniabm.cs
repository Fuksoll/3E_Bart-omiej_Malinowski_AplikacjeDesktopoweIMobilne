using System;
public class Program
{
    public static void Main(string[] args)
    {
        int number = 1;
        string newstring;
        char nazwa = 'z';

        string new_string;
        new_string = "HI! whats up?";
        Console.WriteLine(new_string);
        
        int d = 10, l = 5;
        var c = d + l; 
        Console.WriteLine(c);

        bool aa = true, bb = false, cc = true;

        int pi = (int)3.14f;
        float e = 2.7f;
        int eInt = (int)e;
        Console.WriteLine(pi);
        Console.WriteLine(eInt);

        int i = 1;
        string j = i.ToString();

        string ii = "122022";
        int jj = Convert.ToInt32(ii);

        int k = 65;
        char z = 'z';
        char jjj = Convert.ToChar(k);
        int g = Convert.ToInt32(z);
        Console.WriteLine(jjj);
        Console.WriteLine(g);

        const int CONST_VALUE = 5;
        //CONST_VALUE = 1;  nie mozna zmienic wartosci stalej

        //z1
        float PI = (int)3.14f;
        Console.WriteLine(PI);
        //z2
        string imie_nazwisko;
        imie_nazwisko = "Bartłomiej Malinowski";
        Console.WriteLine(imie_nazwisko);
        //z3
        int x = 10;
        float y;
        y = (int)x;
        Console.WriteLine(y);
        //z4
        double a = 10.78493;
        int b;
        b = (int)a;
        Console.WriteLine(b);
        //z5
        string napis;
        Console.WriteLine("Napisz cos");
        napis = Console.ReadLine();
    }
}