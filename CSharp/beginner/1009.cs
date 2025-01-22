using System;

class Program
{
    static void Main(string[] args)
    {
        string name = Console.ReadLine();
        double salary = double.Parse(Console.ReadLine());
        double sales = double.Parse(Console.ReadLine());
        
        double bonus = (sales / 100) * 15;
        double total = salary + bonus;

        Console.WriteLine($"TOTAL = R$ {total:F2}");
    }
}
