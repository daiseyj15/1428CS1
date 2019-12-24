//  Author: Daisey Jaramillo
//
//  Serial Number: 30
//
//  Due Date: October 17,2018
//  Programming Assignment Number 4
//  Fall 2018 - CS 1428 - Section Number
//
//  Instructor: Husain Gholoom
//
// The purpose of this program is to get two positive numbers from user
// and show even numbers, odd numbers, the same t\of those two, find prime numbers,
// and factorials


#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int firstNum, secondNum; //variables for user input


    cout << "Practice with iterations" << endl << endl;
    cout << "The function of this program is, given 2 positive numbers, the program" << endl;
    cout << "will display the following"<< endl << endl;
    cout << "   1.  All even numbers between firstNum and secondNum." << endl;
    cout << "   2.  All odd numbers between firstNum and secondNum." << endl;               //prints out text for user
    cout << "   3.  Sum of all even numbers between firstNum and secondNum." << endl;
    cout << "   4.  Sum of all odd numbers between firstNum and secondNum;" << endl;
    cout << "   5.  All prime numbers between firstNum and secondNum." << endl;
    cout << "   6.  Factorial of the secondNum. " << endl;
    cout << "   7.  The numbers and their squares between firstNum and secondNum." << endl << endl <<endl;


    cout << endl<< "Enter The First Number : ";
    cin >> firstNum;                             // Lets the user put their input



    cout << "Enter The Second Number : ";   // Lets the user put their input
    cin >> secondNum;


    if (cin.fail())
    {
        cout << endl << "Error - Invalid Number: Number must be Positive integer." << endl;
        cout << endl << "Daisey Jaramillo" << endl;                                         //terminates the program and
        cout << "October 2018" << endl;                                                    // prints an error message because user put in wrong input
        return -1;
    }

    if (firstNum >= secondNum)
        cout << endl << "Error: First Number Must be < Second Number."; //if first number is larger than second number user gets an error
    if (firstNum <= 0 || secondNum <= 0)
        cout << endl << "Error -Invalid Number: Numbers must be Positive."; //if numbers are negative user gets an error

    cout << endl << "You Entered : " << firstNum;
    cout << " and " << secondNum << endl;           // prints out the numbers the user has chose

    cout << endl << "       1. All Even Numbers: ";

    int one= firstNum;
        while (one < secondNum)
            {

                if (one % 2 == 0)
                    {
                        cout << one << ",";     //calculates and prints even numbers
                    }

                    one++;
            }

    cout << endl << "       2. All Odd Numbers: ";
    int two = firstNum;
    two++;
        while (two < secondNum)
            {
                if (!(two % 2 == 0))            // calculates and prints odd numbers
                    {
                        cout << two << ",";
                    }

                    two++;
            }


    cout << endl << "       3. Sum Of All Even Numbers: ";
    int sum = 0;
    int y = firstNum;
            for (y ; y < secondNum; y++)
            {
                if(y % 2 == 0)              //calculates and prints sum of all even numbers
                {
                    sum = sum +y;
                }
            }
    cout << sum;

    cout << endl << "       4. Sum Of All Odd Numbers: ";
        int total = 0;
        int x = firstNum;
        x++;
            for (x; x < secondNum; x++)
            {
                if(!(x % 2 == 0))       //calculates and prints the sum of all odd numbers
                {
                    total = total + x;
                }
            }
    cout << total;



    cout << endl << "       5. All Prime Numbers: ";
    int d=firstNum;
    d++;
        for(d ; d<=secondNum; d++)
        {
            int count=0;
            for(int j=2; j<d; j++)
            {
                if(d%j==0)                  //calculates and prints all prime numbers in between user input
                {
                    count++;
                    break;
                }
            }
            if(count==0)
            {
                cout<< d <<",";
            }
        }

    cout << endl << "       6. Factorial of " << secondNum << " : ";
    int long long  factorial =1;

        for (int h =1; h<= secondNum; h++)
        {
            factorial *= h;                     //calculates and prints the second numbers factorial
        }
    cout << factorial;




    cout << endl << "       7. Number       Square" << endl << endl;
    int b = firstNum;
    b++;
    int power =2;
        while (b < secondNum)
        {
            cout << "           " << b;     //prints the numbers between the two inputs in a line
                                            //and squares those numbers in a line parallel to it
            int e = b;
            int squared = pow(e,power);
            cout << "              "<< squared << endl;
            b++;

        }



    cout << endl << endl <<"Daisey Jaramillo" << endl;  //prints my name, month, and year
    cout << "October 2018" << endl;

    return 0;
}
