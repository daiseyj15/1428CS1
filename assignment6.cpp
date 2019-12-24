// Author: Daisey Jaramillo
//
// Serial Number: 30
//
// Due Date: November 7, 2018
// Programming Assignment Number 6
// Fall 2018 - CS 1428 - Section Number
//
// Instructor: Husain Gholoom
//
// The purpose of this program is to take a date from the user
// and tell the user what day of the year it is and if it is a leap year or not.


#include <iostream>

using namespace std;


bool checkMonth(int&);
bool checkDay(int&, int&);
bool checkYear(int&, int&, int&);   // prototypes
string nameMonth(int);
int numOfDays(int,int,int,int&);
bool checkLeapYear(int);


int main()
{
    int month;
    int day;        //variables
    int year;
    int total = 0;
    char lastTryAnother;

    cout << "DOY" << endl;
    cout << "Given the date in the form of" << endl;        //output
    cout << "month, day, and year, the program" << endl;
    cout << "will display the day of the year." << endl << endl << endl;

    cout << "Enter date in the form: month day year: " << endl << endl;
    cout << "Enter month:   ";
    cin >> month;                                           // takes user's desired input

    if (cin.fail())     // if user puts anything other than an integer
    {
        cin.clear();
        cin.ignore();   // to get new input

        char tryAnother;
        cout << "Invalid month number" << endl;
        cout << endl << "Try another date Y/N --->"; //asks the user if they want to try again
        cin >> tryAnother;

        switch (tryAnother)     //analysis the users input
        {
        case 'Y':
        case 'y':
            cout << endl << endl << "Enter date in the form: month day year: " << endl << endl;
            cout << "Enter month:   ";
            cin >> month;
           break;
        case 'n':
        case 'N':
           return -1;
           break;
        default:
                cout << endl << endl << "Invaild Choice - Enter y/n ";
                cin >> tryAnother;
                cout << endl << endl << "Enter date in the form: month day year: " << endl << endl;
                cout << endl << "Enter month:   ";
                cin >> month;
            break;

        }

    }

    checkMonth(month);  //calls function

    cout << "Enter day: ";
    cin >> day;              //gets user input

    checkDay(day, month);   //calls function

    cout << "Enter year: ";
    cin >> year;            //gets user input

    checkYear(year, day, month);    //calls function

    cout << endl << endl << endl << endl << endl;
    nameMonth(month);           //calls function

    cout << " - " << day << " - " << year << endl;
    cout << "Is day number ";   //displays the date user entered

    numOfDays(day, month, year, total); //calls function
    cout << total;


    cout << " of the year " << year << endl; //shows year
    cout << "Year " << year;

    checkLeapYear(year);    //calls function

    cout << endl << endl << "Try another date Y/N --->";
    cin >> lastTryAnother;  //gets user input


        if (lastTryAnother == 'y' || lastTryAnother == 'Y') //excecutes this if user types y
{
    cout << endl << endl << endl << "Enter date in the form: month day year:";
            cout << endl << endl << "Enter month:   ";
            cin >> month;
            checkMonth(month);
            cout << "Enter day: ";
            cin >> day;
            checkDay(day, month);
            cout << "Enter year: ";
            cin >> year;
            checkYear(year, day, month);
            cout << endl << endl << endl << endl << endl;
    nameMonth(month); //calls function

    cout << " - " << day << " - " << year << endl;
    cout << "Is day number ";

    numOfDays(day, month, year, total); //calls function
    cout << total;


    cout << " of the year " << year << endl;
    cout << "Year " << year;

    checkLeapYear(year);    //calls function

}
else
{   // if anything else terminates
   cout << endl << endl << endl << endl << "DOY by Daisey Jaramillo" << endl;
    cout << "11/07/2018" << endl << endl;
    return 0;
}

 cout << endl << endl << "Try another date Y/N --->";
    cin >> lastTryAnother;


        //gives another try

        if (lastTryAnother == 'y' || lastTryAnother == 'Y')
{
    cout << endl << endl << endl << "Enter date in the form: month day year:";
            cout << endl << endl << "Enter month:   ";
            cin >> month;
            checkMonth(month); //call function
            cout << "Enter day: ";
            cin >> day;
            checkDay(day, month); //call function
            cout << "Enter year: ";
            cin >> year;
            checkYear(year, day, month); //call function
            cout << endl << endl << endl << endl << endl;
    nameMonth(month); // call function

    cout << " - " << day << " - " << year << endl;
    cout << "Is day number ";

    numOfDays(day, month, year, total); // call function
    cout << total;


    cout << " of the year " << year << endl;
    cout << "Year " << year;

    checkLeapYear(year);    //calls function
}

    //footer
    cout << endl << endl << endl << endl << "DOY by Daisey Jaramillo" << endl;
    cout << "11/07/2018" << endl << endl;
    return 0;
}



// definitions


bool checkMonth(int &month)
{
    //checks if month is between 1 and 12
    if(month >= 1 && month <= 12)
    return true;
    else
    {
        char tryAnother;
        cout << month << " is an invalid month number";
        cout << endl << endl << endl << endl << "Try another date Y/N --->";
        cin >> tryAnother;

       while(tryAnother)
       {
           switch (tryAnother)
        {
        case 'y':
        case 'Y':
            break;
        case 'n':
        case 'N':
            return -1;
            break;
        default:
            cout << endl << endl << "Invaild Choice - Enter y/n ";
            cin >> tryAnother;
            break;
       }
    if (tryAnother == 'y' || tryAnother == 'Y')
    break;
        }

            cout << endl << endl << endl << "Enter date in the form: month day year:";
            cout << endl << endl << "Enter month:   ";
            cin >> month;
            checkMonth(month);
        }

        }

bool checkDay(int &day, int &month)
{
    //checks if day is between 1 and 31
if(day >= 1 && day <= 31)
    return true;
else
{
    char tryAnother;
        cout << day << " is an invalid day number";
        cout << endl << endl << endl << endl << "Try another date Y/N --->";
        cin >> tryAnother;

       while(tryAnother)
       {
           switch (tryAnother)
        {
        case 'y':
        case 'Y':
            break;
        case 'n':
        case 'N':
            return -1;
            break;
        default:
            cout << endl << endl << "Invaild Choice - Enter y/n ";
            cin >> tryAnother;
            break;
       }
    if (tryAnother == 'y' || tryAnother == 'Y')
    break;
        }

            cout << endl << endl << endl << "Enter date in the form: month day year:";
            cout << endl << endl << "Enter month:   ";
            cin >> month;
            checkMonth(month);
            cout << "Enter day: ";
            cin >> day;
            checkDay(day, month);
}
}

bool checkYear(int &year, int &day, int &month)
{   //checks if year is between 1 and 2018
    if(year > 0 && year <= 2018)
        return true;
    else
    {
      char tryAnother;
        cout << year << " is an invalid year number";
        cout << endl << endl << endl << endl << "Try another date Y/N --->";
        cin >> tryAnother;

       while(tryAnother)
       {
           switch (tryAnother)
        {
        case 'y':
        case 'Y':
            break;
        case 'n':
        case 'N':
            return -1;
            break;
        default:
            cout << endl << endl << "Invaild Choice - Enter y/n ";
            cin >> tryAnother;
            break;
       }
    if (tryAnother == 'y' || tryAnother == 'Y')
    break;
        }

            cout << endl << endl << endl << "Enter date in the form: month day year:";
            cout << endl << endl << "Enter month:   ";
            cin >> month;
            checkMonth(month);
            cout << "Enter day: ";
            cin >> day;
            checkDay(day, month);
            cout << "Enter year: ";
            cin >> year;
            checkYear(year, day, month);
    }

}
string nameMonth(int month)
{
    //determines what the name of the months are
    if(month == 1)
        cout << "January";
    if(month == 2)
        cout << "February";
    if(month == 3)
        cout << "March";
    if(month == 4)
        cout << "April";
    if(month == 5)
        cout << "May";
    if(month == 6)
        cout << "June";
    if(month == 7)
        cout << "July";
    if(month == 8)
        cout << "August";
    if(month == 9)
        cout << "September";
    if(month == 10)
        cout << "October";
    if(month == 11)
        cout << "November";
    if(month == 12)
        cout << "December";


}

int numOfDays(int day, int month, int year, int &total)
{
    // calculates what day out of 365 or 366 it is

if(year % 4==0 && !(year % 100==0))
    {
        while(month > 1)
        {
            if(month ==1)
                total += 31;
            if(month ==2)
                total += 29;
            if(month==3)
                total += 31;
            if(month==4)
                total += 30;
            if(month==5)
                total += 31;
            if(month==6)
                total += 30;
            if(month==7)
                total += 31;
            if(month==8)
                total += 31;
            if(month==9)
                total += 30;
            if(month ==10)
                total += 31;
            if(month==11)
                total += 30;
            if(month==12)
                total += 31;


                --month;
        }


    }
else
    {
        while(month > 1)
        {
            if(month ==1)
                total += 31;
            if(month ==2)
                total += 28;
            if(month==3)
                total += 31;
            if(month==4)
                total += 30;
            if(month==5)
                total += 31;
            if(month==6)
                total += 30;
            if(month==7)
                total += 31;
            if(month==8)
                total += 31;
            if(month==9)
                total += 30;
            if(month ==10)
                total += 31;
            if(month==11)
                total += 30;
            if(month==12)
                total += 31;


                --month;
        }

    }

    total = total + day;

   return total;
}
bool checkLeapYear(int year)
{
    //checks if it is a leap year or not
if(year % 4==0 && !(year % 100==0))
    {cout << " is a leap year";
    return 1;}
else
    {cout << " is not a leap year";
    return 0;}

}
