/*
Author : Daisey Jaramillo

Serial Number : 30

September 19,2018
Programming Assignment Number 2
Fall 2018 - CS 1428 - 004

Instructor: Husain Gholoom

This program computes the total price of
products sold at Hi Five Electronic Store.
*/
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
  cout << "Hi Five Electronics Store" << endl << endl; //top line

    const float TAX_RATE = .0825 ;
    const float TV_PRICE = 400.00;
    const float VCR_PRICE = 220.00;                 //constants
    const float REMOTECONTROL_PRICE = 35.20;
    const float CDPLAYER_PRICE = 300.00;
    const float TAPERECORDER_PRICE = 150.00;

    int numOfTvs;
    cout << "How many TV were sold? \t\t\t\t";      //prints out how many tv's were sold
    cin >> numOfTvs;

    int numOfVcrs;
    cout << "How many VCR were sold?\t\t\t\t";      //prints out how many vcr's were sold
    cin >> numOfVcrs;

    int numOfControls;
    cout << "How many remote controls were sold?\t\t";  //prints out how many remotes were solf
    cin >> numOfControls;

    int numOfCds;
    cout << "How many CD's were sold?\t\t\t";       //prints out how many cds were sold
    cin >> numOfCds;

    int numOfTapes;
    cout << "How many tape recorders were sold?\t\t"; //prints out how many recorders were sold
    cin >> numOfTapes;


    cout << endl << endl << "QTY    DESCRITPTION    UNIT PRICE    TOTAL PRICE" << endl;
    cout << "---    ------------    ----------    ------------";
    cout << endl << numOfTvs << "      TV\t       " << fixed << setprecision(2) << TV_PRICE;

    float totalPriceTv;
    cout << "\t     ";
            totalPriceTv = numOfTvs * TV_PRICE;     //calculates price of TVs
    cout << totalPriceTv;

    cout << endl << numOfVcrs << "      VCR\t       " << fixed << setprecision(2) << VCR_PRICE;

    float totalPriceVcr;
    cout << "\t     ";
            totalPriceVcr = numOfVcrs * VCR_PRICE;      //calculates price of VCRs
    cout << totalPriceVcr;

    cout << endl << numOfControls << "      REMOTE CONTROL  " << fixed << setprecision(2) << REMOTECONTROL_PRICE;

    float totalPriceControl;
    cout << "\t     ";
            totalPriceControl = numOfControls * REMOTECONTROL_PRICE;    //calculates price of controls
    cout << totalPriceControl;

    cout << endl << numOfCds << "      CD PLAYER       " << fixed << setprecision(2) << CDPLAYER_PRICE;

    float totalPriceCd;
    cout << "\t     ";
            totalPriceCd = numOfCds * CDPLAYER_PRICE;   //calculates price of cds
    cout << totalPriceCd;

    cout << endl << numOfTapes << "      TAPE RECORDER   " << fixed << setprecision(2) << TAPERECORDER_PRICE;

    float totalPriceTape;
    cout << "\t     ";
            totalPriceTape = numOfTapes * TAPERECORDER_PRICE;   //calculates price of tape recorders
    cout << totalPriceTape;

    cout << endl << "\t\t\t\t     ------------";
    cout << endl << "\t\t\tSUBTOTAL";

    float subtotal;
            subtotal = totalPriceCd + totalPriceControl + totalPriceTape    //calculates subtotal
            + totalPriceTv + totalPriceVcr;
    cout << "     " << subtotal;

    cout << endl << "\t\t\tTAX";

    float tax;
            tax = subtotal * TAX_RATE;  //calculates tax
    cout << "\t     " << tax;

    cout << endl << "\t\t\tTOTAL";

    float total;
            total = tax + subtotal;     //calculates total
    cout << "\t     " << total;


    cout << endl << endl << "Prepared by Daisey Jaramillo" << endl;     //prints out prepared by Daisey Jaramillo


    return 0;
}
