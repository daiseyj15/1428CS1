// Serial Number: 30
// Author: Daisey Jaramillo
//
// Due Date: November 26,2018
// Programming Assignment Number 7
// Fall 2018 - CS 1428 - 004
//
// Instructor: Husain Gholoom.
//
// The purpose of this code is to output
// soccer player's information then determine
// who scored the most points then sort the list
// of players by descending points scored.

#include <iostream>

using namespace std;

struct Player{
        int number;     //declaring the structure
        string names;
        int pointsScored;
    };
void theTable(Player* roster);  //function to make the table
int calculateTotalPoints(Player* roster);   //function to add the points
int whoEarnedTheMostPoints(Player* roster); //function to decide who has most points
void sortTheTable(Player* roster);  //function to rearrange the table


int main()
{

    Player roster[11]; //making an array
    Player player1, player2, player3, player4, player5, player6, player7, player8, player9, player10, player11;
    player1.number = 7;
    player1.names = " Cristiano Ronaldo";
    player1.pointsScored = 31;
    player2.number = 10;
    player2.names = "Wayne Rooney     ";    //entering different player info
    player2.pointsScored = 37;
    player3.number = 17;
    player3.names = "Neymar           ";
    player3.pointsScored = 29;
    player4.number = 8;
    player4.names = " Andres Iniesta   ";
    player4.pointsScored = 32;
    player5.number = 19;
    player5.names = "Robin van Persie ";
    player5.pointsScored = 20;
    player6.number = 10;
    player6.names = "Lionel Messi     ";
    player6.pointsScored = 43;
    player7.number = 6;
    player7.names = " Xavi Hernandez   ";
    player7.pointsScored = 36;
    player8.number = 10;
    player8.names = "Mesut Ozil       ";
    player8.pointsScored = 38;
    player9.number = 10;
    player9.names = "Didier Drogba    ";
    player9.pointsScored = 35;
    player10.number = 9;
    player10.names = " Fernando Torres  ";
    player10.pointsScored = 29;
    player11.number = 10;
    player11.names = "Kaka             ";
    player11.pointsScored = 17;
    roster[0] = player1;
    roster[1] = player2;
    roster[2] = player3;
    roster[3] = player4;
    roster[4] = player5;    //setting the array to the different players
    roster[5] = player6;
    roster[6] = player7;
    roster[7] = player8;
    roster[8] = player9;
    roster[9] = player10;
    roster[10] =  player11;




    cout << endl << "Team of F C B" << endl << endl; //output
    cout << "The players of the team are:" << endl << endl;


theTable(roster);
calculateTotalPoints(roster); //function calls
whoEarnedTheMostPoints(roster);
sortTheTable(roster);

                                    //output
    cout << endl  << endl << "Daisey Jaramillo - F C B - 2018" << endl << endl << endl;
    return 0;
}

//function definitions
void theTable(Player* roster)
{
    cout<<"Player Number"<<"        "<<"Player Name"<<"        "<<"Points Scored"<<endl<<endl;
    for(int i=0; i<=10; i++) //using the array to set up the table
    {
        cout << "       " << roster[i].number << "            ";
        cout << roster[i].names << "         ";
        cout << roster[i].pointsScored << endl;
    }
}

int calculateTotalPoints(Player* roster)
{
    int total = 0; //variable to contain total
    cout << endl << endl << endl << "Total Points earned by the team is  ";
    //adding all the points up
    for(int i=0; i<=10; i++)
    {
        total = total + roster[i].pointsScored;
    }


    cout << total << endl;

    return 1;
}

int whoEarnedTheMostPoints(Player* roster)
{
    //output
    cout << endl << "The Name and the Number of the player who has scored the most points:";
    cout << endl << endl << "Name of the Player is: " << "    " ;

    int largest; //number holder for the largest points scored
    int place = 0; // variable to tell you what place the largest score was
    largest = roster[0].pointsScored;
    for(int d = 1; d < 11; d++)
    {
        if(roster[d].pointsScored > largest)
        {
            largest = roster[d].pointsScored;
            place = d;
        }

    }
    //the name
    cout << roster[place].names;
    cout << endl << "His Number is:  "; //output
    cout << roster[place].number; //the players number
    return 1;
}

void sortTheTable(Player* roster)
{
    //output
    cout<<endl<<endl<<endl<<"The Sorted Records are" << endl << endl;
    cout<<"Player Number"<<"        "<<"Player Name"<<"        "<<"Points Scored"<<endl<<endl;
    int a,c,m;
    string b,n; //variables as placeholders
    int g = 0;
    //rearranging the table
    for(int x = 0; x < 11; x++)
    {
      for(int d =0; d < 10; d++)
      {
          if(roster[d].pointsScored < roster[d + 1].pointsScored)
          {
            c = roster[d].pointsScored;
            roster[d].pointsScored = roster[d + 1].pointsScored;
            roster[d+1].pointsScored  = c;
            a = roster[d].number;
            roster[d].number = roster[d+1].number;
            roster[d+1].number = a;
            b = roster[d].names;
            roster[d].names = roster[d+1].names;
            roster[d+1].names = b;
          }

      } //because two players have the same points scored and need to be switched
      if(roster[g].pointsScored == 29 && roster[g].names == " Fernando Torres  ")
          {
              m = roster[g].number;
              roster[g].number = roster[g-1].number;
              roster[g-1].number = m;
              n = roster[g].names;
              roster[g].names = roster[g-1].names;
              roster[g-1].names = n;

          }
          g++;
    }

    // outputs the new table
    for(int i=0; i<=10; i++)
    {
        cout << "       " << roster[i].number << "            ";
        cout << roster[i].names << "         ";

        cout << roster[i].pointsScored << endl;
    }




}
