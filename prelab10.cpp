
// Lab 10 Pre-Lab Assignment
//DAISEY JARAMILLO

// Write a function that multiplies each element in the array "myArray"
// by the variable "multiplyMe".

#include <iostream>

using namespace std;

// TODO - Write your function prototype here
int aFunction (int [], int);

int main()
{
    const int SIZE = 10;
    int myArray [SIZE] = {5, 10, 15, 20, 25, 30, 35, 40, 45, 50};
    int multiplyMe = 5;

    // TODO - Add your function call here
aFunction(myArray, multiplyMe);

    // print the array
    for(int i=0; i < SIZE; i++)
    {
        cout << myArray[i] << " ";
    }
    cout << endl;

    return 0;

}

// TODO - Write your function definition here
 int aFunction(int myArray[], int multiplyMe)
 {
     int SIZE = 10;
     for(int i=0; i< SIZE; i++)
     {
         myArray[i] *= multiplyMe;
     }
    return 1;
 }
