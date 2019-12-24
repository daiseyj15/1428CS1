/*
*   1428_4_F18_PA1_Jaramillo_Daisey.cpp
*
*   Author : Daisey Marie Jaramillo
*   Due date : September 10,2018
*   Programming Assignment Number 1
*   Fall 2018 - CS1428 - Section Number 4
*
*   Instructor : Husain Gholoom
*
*   ** This program prints information about myself :) **
*
*/
#include <iostream>
using namespace std;

int main()
{

     // Displaying the first part

    cout << "*********************************************************************************" << endl;
    cout << "*\t\t       WELCOME \t\t\t\t\t\t\t*" << endl;

        // Declare variables

    string firstName , lastName;
    firstName = "Daisey";
    lastName = "Jaramillo";         // My name
    char midInitial;
    midInitial = 'M';

    string course;                      // The name of the course
    course = "Foundations of Computer Science I";

    int sectionNumber;
    sectionNumber = 1428;       // The section number for this class
    int sectionNumber2;
    sectionNumber2 = 004;

    int serialNumber;       // Number next to my name on the roster
    serialNumber = 31;

    string month;
    month = "September";
    int date;               // The due date
    date = 10;
    int year;
    year = 2018;

    string major;               // My major
    major = "Computer Science";

    string minor;           // My minor
    minor = "Mathematics";

    string classification;     // The class I'm in
    classification = "Junior";

    string Iam;         // If I'm a full time student
    Iam = "a full time student";

    string reason;      // My reasoning for being in this class
    reason = "This class is part of earning my    *\n* \t degree and I also really enjoy learning to code!";

    char grade;     // what grade i expect to get in this class
    grade = 'A';

    string workXP;      // places i have worked at before
    workXP = "Beaver's Kitchen and HEB";

    string computerSkills;      // My computer skills
    computerSkills = "Java";

    string favMovie;        // My favorite movie
    favMovie = "The Great Gatsby";

    string favSport;      // My favorite sport
    favSport = "Baseball";

    string favSong;     // My favorite song
    favSong = "Blood On The Leaves by: Kanye West";

    string favShow;     // My favorite show
    favShow = "American Horror Story";

    string hobbies;     // Some hobbies of mine
    hobbies = "Making YouTube videos and making music";

        // Display answers and stars

    cout << "*\t  My Name is : " << lastName << " " << firstName << " " << midInitial << "\t\t\t\t\t*" << endl;
    cout << "*\t  This course is : " << course << "\t\t\t*" << endl;
    cout << "*\t  Section Number : " << sectionNumber << "-" << sectionNumber2 << "\t\t\t\t\t\t*" << endl;
    cout << "*\t  Serial Number : " << serialNumber << "\t\t\t\t\t\t\t*" << endl;
    cout << "*\t Date : " << month << " " << date << ", " << year << "\t\t\t\t\t\t*" << endl;
    cout << "*\t Major : " << major << "\t\t\t\t\t\t*" << endl;
    cout << "*\t Minor : " << minor << "\t\t\t\t\t\t\t*" << endl;
    cout << "*\t Classification : " << classification << "\t\t\t\t\t\t*" << endl;
    cout << "*\t I am : " << Iam << "\t\t\t\t\t\t*" << endl;
    cout << "*\t The Reason for Taking This Class : " << reason << "\t\t\t*" << endl;
    cout << "*\t Grade Expected : " << grade << "\t\t\t\t\t\t\t*" << endl;
    cout << "*\t About Me : \t\t\t\t\t\t\t\t*" << endl;
    cout << "*\t\t Working Experience : " << workXP << "\t\t\t*" << endl;
    cout << "*\t\t Computer Skills : " << computerSkills << "\t\t\t\t\t\t*" << endl;
    cout << "*\t\t\t\t\t\t\t\t\t\t*" << endl;
    cout << "*\t\t Favorite Movie : " << favMovie << "\t\t\t\t*" << endl;
    cout << "*\t\t Favorite Sport : " << favSport << "\t\t\t\t\t*" << endl;
    cout << "*\t\t Favorite Artist / Song : " << favSong << "\t*" << endl;
    cout << "*\t\t Favorite TV Show : " << favShow << "\t\t\t*" << endl;
    cout << "*\t\t Hobbies : " << hobbies << "\t\t*" << endl;
    cout << "*\t\t\t\t\t\t\t\t\t\t*" << endl;
    cout << "*********************************************************************************" << endl << endl << endl;
    cout << "Prepared by : " << lastName << " " << firstName << " " << midInitial << "." << endl;
    cout << month << " " << year << endl << endl << endl;

    return 0;
}
