//  Serial Number: 30
//
//  Author: Daisey Jaramillo
//
//  Due Date: December 3,2018
//  Programming Assignment Number 8
//  Fall 2018 - CS 1428 - 004
//
//  Instructor: Husain Gholoom.
//
//  The purpose of this program is to calculate and output
//  an annual sales report.

#include <iostream>
#include <iomanip>  //needed for set precison
#include <fstream>  //for input file

using namespace std;

struct salesPersonRecord
{
    int SlaesPersonID;      //structure for info
    double saleByQuarter[4];
    double totalSale;
};
int getData(salesPersonRecord * info);  //function prototypes
void totalSalesByPerson(salesPersonRecord * info);
void salesByQuarter(salesPersonRecord * info, double &, double &, double &, double &);
void maxSaleByPerson(salesPersonRecord * info);
void maxSaleByQuarter(double, double, double, double);

int main()
{
    double qt1 =0;
    double qt2 =0;  // variables for quarters
    double qt3 =0;
    double qt4 =0;
    //declaring an array for the structure
    salesPersonRecord info[6];
    //function calls
    getData(info);

    totalSalesByPerson(info);

    salesByQuarter(info,qt1,qt2,qt3,qt4);

    maxSaleByPerson(info);

    maxSaleByQuarter(qt1,qt2,qt3,qt4);

    //end output
    cout << endl << endl << "This Report is prepared by: Daisey Jaramillo" << endl;
    cout << "District Number: 30" << endl;
    cout << "Date: 12-3-2018" << endl << endl << endl << endl;

    return 0;
}
int getData(salesPersonRecord * info)
{


ifstream fp_in;
    //opening the file
    fp_in.open("sales.txt");

    //checking if the file opened
    if(!fp_in)
    {
        cout << "Can't open the input file successfully." << endl;
        return 1;
    }

    //putting data from file into the array
    for(int d=0; d <= 5; d++)
    {
        fp_in >> info[d].SlaesPersonID;
        for(int e=0; e<4; e++)
        {
            fp_in >> info[d].saleByQuarter[e];

        }

    }



}
void totalSalesByPerson(salesPersonRecord * info)
{
    //making the table
    cout << endl << endl;
    cout << "                         Bubba's Company" << endl;
    cout << "       ----------- Annual Sales Report - 2017 -----------" << endl;
    cout << " ID         QT1         QT2         QT3         QT4         Total" << endl;
    cout << "_____________________________________________________________________"<< endl << endl;
    //giving the total sales an inital value
    info[0].totalSale = 0;
    info[1].totalSale = 0;
    info[2].totalSale = 0;
    info[3].totalSale = 0;
    info[4].totalSale = 0;
    info[5].totalSale = 0;
    //calculating the correct total sale for each
    for(int x=0; x <= 5; x++)
    {
        for(int d=0; d<4; d++)
        {
            info[x].totalSale = info[x].saleByQuarter[d] + info[x].totalSale;
        }
    }
    //making sure the .00 shows up
    cout <<fixed<<setprecision(2);
    //so that thing line up
    cout << info[0].SlaesPersonID << "      ";
    cout << info[0].saleByQuarter[0] << "     ";
    cout << info[0].saleByQuarter[1] << "         ";
    cout << info[0].saleByQuarter[2] << "      ";
    cout << info[0].saleByQuarter[3] << "      ";
    cout << info[0].totalSale << endl;

    cout << info[1].SlaesPersonID << "      ";
    cout << info[1].saleByQuarter[0] << "      ";
    cout << info[1].saleByQuarter[1] << "       ";
    cout << info[1].saleByQuarter[2] << "     ";
    cout << info[1].saleByQuarter[3] << "        ";
    cout << info[1].totalSale << endl;

    cout << info[2].SlaesPersonID << "      ";
    cout << info[2].saleByQuarter[0] << "     ";
    cout << info[2].saleByQuarter[1] << "      ";
    cout << info[2].saleByQuarter[2] << "        ";
    cout << info[2].saleByQuarter[3] << "        ";
    cout << info[2].totalSale << endl;

    cout << info[3].SlaesPersonID << "      ";
    cout << info[3].saleByQuarter[0] << "      ";
    cout << info[3].saleByQuarter[1] << "       ";
    cout << info[3].saleByQuarter[2] << "     ";
    cout << info[3].saleByQuarter[3] << "        ";
    cout << info[3].totalSale << endl;

    cout << info[4].SlaesPersonID << "      ";
    cout << info[4].saleByQuarter[0] << "     ";
    cout << info[4].saleByQuarter[1] << "      ";
    cout << info[4].saleByQuarter[2] << "        ";
    cout << info[4].saleByQuarter[3] << "     ";
    cout << info[4].totalSale << endl;

    cout << info[5].SlaesPersonID << "      ";
    cout << info[5].saleByQuarter[0] << "      ";
    cout << info[5].saleByQuarter[1] << "         ";
    cout << info[5].saleByQuarter[2] << "      ";
    cout << info[5].saleByQuarter[3] << "     ";
    cout << info[5].totalSale << endl;

    cout << endl << endl;

}
void salesByQuarter(salesPersonRecord * info, double &qt1, double &qt2, double &qt3, double &qt4)
{
    cout << "Total      ";
    //adding up the totals for each quarter
    for(int x=0; x <=5; x++)
    {
        qt1 = info[x].saleByQuarter[0] + qt1;
        qt2 = info[x].saleByQuarter[1] + qt2;
        qt3 = info[x].saleByQuarter[2] + qt3;
        qt4 = info[x].saleByQuarter[3] + qt4;
    }
    //displays the amount
    cout << qt1 << "     ";
    cout << qt2 << "      ";
    cout << qt3 << "    ";
    cout << qt4 << endl << endl;


}
void maxSaleByPerson(salesPersonRecord * info)
{
    cout << "Max Sale by SalesPerson:ID = ";
    //finding the largest total sale
    int largest;
    int place = 0;
    largest = info[0].totalSale;
    for(int d = 1; d < 6; d++)
    {
        if(info[d].totalSale > largest)
        {
            largest = info[d].totalSale;
            place = d;
        }

    }
    //displays the answer
    cout << info[place].SlaesPersonID << ",       Amount = $";
    cout << info[place].totalSale << endl;
}
void maxSaleByQuarter(double qt1, double qt2, double qt3, double qt4)
{
    cout << endl << "Max Sale by Quarter:Quarter = ";
    // putting the quarter totals into an array
    double maxQuart[4] = {qt1,qt2,qt3,qt4};
    //finding the largest amount
        int largest;
        int place = 0;
    largest = maxQuart[0];
    for(int d = 1; d < 5; d++)
    {
        if(maxQuart[d] > largest)
        {
            largest = maxQuart[d];
            place = d;
        }

    }
    //determining the right quarter
    if(place == 0)
        cout << "1,";
    if(place == 1)
        cout << "2,";
    if(place == 2)
        cout << "3,";
    if(place == 3)
        cout << "4,";

    //displays the amount in that quarter
    cout << "          Amount = $" << maxQuart[place] << endl;

}
