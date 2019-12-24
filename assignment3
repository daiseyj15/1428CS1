// Author: Daisey Jaramillo
//
// Serial Number: 30
//
// Due Date: October 1, 2018
// Programming Assignment Number 3
// Fall 2018 - CS1428 - 004
//
// Instructor: Husain Gholoom.
//
// The purpose of this program is to generate a random number
// and have a person try to guess the number within 7 tries.

#include <iostream>
#include <ctime>   // for random number
#include <cstdlib> // C standard library

using namespace std;

int main()
{
    // defined variables
    int randomNumber, guessedNumber;

        // srand needed for getting random numbers
    srand(time(NULL));

        // randomly generates a number 5 - 40 inclusively
    randomNumber = rand() % 36 + 5;

        // prints out these quotes
    cout << "Welcome to my Simple Guessing Game" << endl << endl;
    cout << "I am thinking of a number between 5 and 40." << endl;
    cout << "You are given up to seven tries to guess the exact number." << endl << endl;
    cout << "Can you guess what it is ?\t";

        //Lets user guess a number
    cin >> guessedNumber;


        //evaluates the input to decide the output
    if(guessedNumber < randomNumber) //if the guess is less than the number
        cout << "Your guess is low. Try again\t";
    else if(guessedNumber > randomNumber) //if the guess is more than the number
        cout << "Your guess is high. Try again\t";
    else //if the guess is correct
        cout << endl << endl << "Congratulations Daisey Jaramillo!!! You did it." << endl << endl;


        //if the user doesn't guess the
        //number then they are given another
        //chance
    if(guessedNumber != randomNumber)
    {
        cin >> guessedNumber;

        if(guessedNumber < randomNumber)
            cout << "Your guess is low. Try again\t";
        else if(guessedNumber > randomNumber)
            cout << "Your guess is high. Try again\t";
        else
            cout << endl << endl << "Congratulations Daisey Jaramillo!!! You did it." << endl << endl;
    }

        //if the user doesn't guess the
        //number then they are given another
        //chance
     if(guessedNumber != randomNumber)
    {
        cin >> guessedNumber;

        if(guessedNumber < randomNumber)
            cout << "Your guess is low. Try again\t";
        else if(guessedNumber > randomNumber)
            cout << "Your guess is high. Try again\t";
        else
            cout << endl << endl << "Congratulations Daisey Jaramillo!!! You did it." << endl << endl;
    }


        //if the user doesn't guess the
        //number then they are given another
        //chance
     if(guessedNumber != randomNumber)
    {
        cin >> guessedNumber;

        if(guessedNumber < randomNumber)
            cout << "Your guess is low. Try again\t";
        else if(guessedNumber > randomNumber)
            cout << "Your guess is high. Try again\t";
        else
            cout << endl << endl << "Congratulations Daisey Jaramillo!!! You did it." << endl << endl;
    }


        //if the user doesn't guess the
        //number then they are given another
        //chance
     if(guessedNumber != randomNumber)
    {
        cin >> guessedNumber;

        if(guessedNumber < randomNumber)
            cout << "Your guess is low. Try again\t";
        else if(guessedNumber > randomNumber)
            cout << "Your guess is high. Try again\t";
        else
            cout << endl << endl << "Congratulations Daisey Jaramillo!!! You did it." << endl << endl;
    }


        //if the user doesn't guess the
        //number then they are given another
        //chance
     if(guessedNumber != randomNumber)
    {
        cin >> guessedNumber;

        if(guessedNumber < randomNumber)
            cout << "Your guess is low. Try again\t";
        else if(guessedNumber > randomNumber)
            cout << "Your guess is high. Try again\t";
        else
            cout << endl << endl << "Congratulations Daisey Jaramillo!!! You did it." << endl << endl;
    }


        //if the user doesn't guess the
        //number then they are given another
        //chance
     if(guessedNumber != randomNumber)
        {
            cin >> guessedNumber;

            if (guessedNumber==randomNumber) //if they guess the right number
                cout << endl << endl << "Congratulations Daisey Jaramillo!!! You did it." << endl << endl;
            else //if they didn't guess right on their last try
               {
                            //tells the user what the correct number was
                cout << endl << endl << "Sorry , The number is  " << randomNumber << endl;
                cout << "Better luck next time Daisey Jaramillo." << endl << endl;
                }

        }

    return 0;
}
