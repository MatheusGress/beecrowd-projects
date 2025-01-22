using System;

class Program
{
    static void Main(string[] args)
    {
        string[] firstProduct = Console.ReadLine().Split(' ');
        int firstCode = int.Parse(firstProduct[0]);
        int firstQuantity = int.Parse(firstProduct[1]);
        double firstPricel = double.Parse(firstProduct[2]);

        string[] secondProduct = Console.ReadLine().Split(' ');
        int secondCode = int.Parse(secondProduct[0]);
        int secondQuantity = int.Parse(secondProduct[1]);
        double secondPricel = double.Parse(secondProduct[2]);

        double valueTotal = (firstQuantity * firstPricel) + (secondQuantity * secondPricel);

        Console.WriteLine($"VALOR A PAGAR: R$ {valueTotal:F2}");
    }
}
