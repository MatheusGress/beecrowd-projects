using System;

class URI {
    
    static void Main(string[] args) { 
        
        double A = 0, R = 0;

          R = double.Parse(Console.ReadLine());
          
          A = 3.14159 * Math.Pow(R, 2);
        
        string AFormatado = A.ToString("0.0000"); 
          Console.WriteLine("A=" + AFormatado); 
        
    }
}
