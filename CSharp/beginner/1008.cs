using System;

class Program
{
    static void Main(string[] args)
    {
        int number = int.Parse(Console.ReadLine());
        int hoursWorked = int.Parse(Console.ReadLine());
        double hourlyRate = double.Parse(Console.ReadLine());

        double salary = hourlyRate * hoursWorked;

        Console.WriteLine($"NUMBER = {number}");
        Console.WriteLine($"SALARY = U$ {salary:F2}");
    }
}
