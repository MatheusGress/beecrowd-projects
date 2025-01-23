using System;

class Program
{
    static void Main(string[] args)
    {
        int x = int.Parse(Console.ReadLine());
        double y = double.Parse(Console.ReadLine());

        double media = x / y;

        Console.WriteLine($"{media:F3} km/l");        
    }
}
