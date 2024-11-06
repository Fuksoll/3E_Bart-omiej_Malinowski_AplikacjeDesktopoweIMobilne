using System;
public class zadaniaaaaaaaaaaaa
{
    public static void Main(string[] args)
    {
        //Napisz program, który za pomocą pętli for wyświetli tabliczkę mnożenia dla liczb od 1 do 10.
        //Każdy wiersz tabliczki mnożenia powinien być w oddzielnej linii.

        for (int i = 1; i <= 10; i++)
        {
            Console.WriteLine("mnożenie: " + i);
            for (int j = 1; j <= 10; j++)
            {
                int suma = i * j;
                Console.WriteLine(suma);
            }
        }

        //Napisz program, który poprosi użytkownika o wprowadzenie liczby całkowitej n,
        //a następnie obliczy i wyświetli sumę wszystkich liczb parzystych od 1 do n włącznie.

        Console.WriteLine("wprowadz liczbe n: ");
        int n = Convert.ToInt32(Console.ReadLine());
        int sum = 0;
        for (int i = 0; i <= n; i++)
        {
            if(i % 2 == 0)
            {
                sum += i;
            }
        }
        Console.WriteLine("suma wynosi: " + sum);

        //Napisz program, który generuje losową liczbę z zakresu od 1 do 100.
        //Następnie użytkownik ma za zadanie odgadnąć tę liczbę.
        //Program powinien dawać wskazówki, czy podana liczba jest za mała, za duża czy poprawna.
        //Użyj pętli while, aby użytkownik mógł zgadywać aż do poprawnego wyniku.


        /*Console.WriteLine("zgadnij liczbe w przedziale od 1 - 10: ");
        int l = Convert.ToInt32(Console.ReadLine());
        Random r = new Random();*/

        //Napisz program, który pobiera od użytkownika liczbę całkowitą i
        //za pomocą pętli while oblicza liczbę cyfr tej liczby.
        //Wynik wyświetl na ekranie.

        /*Console.WriteLine("wprowadz liczbe a: ");
        int a = Convert.ToInt32(Console.ReadLine());
        while ()
        { 
        
        }*/

        //Napisz program, który wyświetla liczby od 1 do 100.
        //Jeśli liczba jest podzielna przez 3, wyświetl „Fizz”.
        //Jeśli liczba jest podzielna przez 5, wyświetl „Buzz”. Jeśli jest podzielna przez oba,
        //wyświetl „FizzBuzz”.
        //Użyj pętli for oraz instrukcji if-else

        string a = "fizz";
        string b = "buzz";
        for (int i = 1;i <= 100; i++)
        {

            if ((i % 3 == 0) && (i % 5 == 1))
            {
               Console.WriteLine(a);
            }
            else if ((i % 3 == 1) && (i % 5 == 0))
            {
               Console.WriteLine(b);
            }
            else if ((i % 3 == 0) && (i % 5 == 0))
            {
                Console.WriteLine(a + b);
            }
            else
            {
               Console.WriteLine(i);
            }

        }
    }
}