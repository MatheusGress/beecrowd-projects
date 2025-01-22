using System;

class Program
{
    static void Main(string[] args)
    {

        double pesoA = 3.5;
        double pesoB = 7.5;

        double a = double.Parse(Console.ReadLine());
        double b = double.Parse(Console.ReadLine());

        double media = ((a * pesoA) + (b * pesoB)) / (pesoA + pesoB);

        Console.WriteLine($"MEDIA = {media:F5}");
    }
}
