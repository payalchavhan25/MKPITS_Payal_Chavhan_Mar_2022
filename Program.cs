using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _2_number_operators_like___using_switch
{
    internal class Program
    {
        static void Main(string[] args)

            {
                //program to accept 2 no and operator like + - *and display the result susing switch
                int s1, s2;
                char op;
                int res = 0;
                Console.WriteLine("enter num1 ");
                s1 = Convert.ToInt32(Console.ReadLine());
                Console.WriteLine("enter num2 ");
                s2 = Convert.ToInt32(Console.ReadLine());
                Console.WriteLine("enter operator like + - * ");
                op = Convert.ToChar(Console.ReadLine());

                switch (op)
                {
                    case '+':
                        res = s1 + s2;
                        break ;
                    case '-':
                        res = s1 - s2;
                        break ;
                    case '*':
                        res = s1 * s2;
                        break ;
                    default:

                    Console.WriteLine("invalid operator");
                    break; 



                }

                Console.WriteLine("result = " + res);
                   
            }
        }
    }

