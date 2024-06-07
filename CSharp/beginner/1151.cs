using System;

class FibonacciSequencia
{
    static void Main()
    {
        int N = int.Parse(Console.ReadLine());
        
        SequenciaFibonacci(N);
    }

    static void SequenciaFibonacci(int N)
    {
        if (N <= 0 || N >= 46)
        {
            return;
        }
        
        int[] fibonacciSequencia = new int[N];
        fibonacciSequencia[0] = 0;
        if (N > 1)
        {
            fibonacciSequencia[1] = 1;
        }
        
        for (int i = 2; i < N; i++)
        {
            fibonacciSequencia[i] = fibonacciSequencia[i - 1] + fibonacciSequencia[i - 2];
        }
    
        for (int i = 0; i < N; i++)
        {
            Console.Write(fibonacciSequencia[i]);
            if (i < N - 1)
            {
                Console.Write(" ");
            }
        }
    }
}
