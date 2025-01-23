using System;

class Program
{
    static void Main(string[] args)
    {
        string i = Console.ReadLine();

        string[] nums = i.Split(' ');

        int a = int.Parse(nums[0]);
        int b = int.Parse(nums[1]);
        int c = int.Parse(nums[2]);

        int bigger = (a + b + Math.Abs(a - b)) / 2;
        bigger = (c + bigger + Math.Abs(c - bigger)) / 2;

        Console.WriteLine($"{bigger} eh o maior");
    }
}
