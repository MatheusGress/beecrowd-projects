using System;

class Program
{
    static void Main(string[] args)
    {

        double pesoA = 2;
        double pesoB = 3;
        double pesoC = 5;

        double a = double.Parse(Console.ReadLine());
        double b = double.Parse(Console.ReadLine());
        double c = double.Parse(Console.ReadLine());

        double media = ((a * pesoA) + (b * pesoB) + (c * pesoC))  / (pesoA + pesoB + pesoC);

        Console.WriteLine($"MEDIA = {media:F1}");
    }
}
