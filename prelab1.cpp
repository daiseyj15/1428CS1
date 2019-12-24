#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    // 1.
    // There are a several errors with the below code
    // Fix the syntax and logical errors.

    // The Program should take two integers from the user and assign them to x and y.
    // The program should then print the square of x and y + 10
    ifstream fp_in;
    ofstream fp_out;
//file new file then empty file

    fp_in.open("I_File.txt");
    fp_out.open("O_file.txt");

    int x;
	int y;

    cout << "Enter the value for X" << endl;
	cin >> x;

	cout << "Enter the value for Y" << endl;
	cin >> y;

    x*= x;

	y += 10;

	cout << "X squared = " << x << endl
	     << "Y + 10  = " << y << endl;



    // 2.
    // Write code that takes the number of pounds the user
    // can lift (use cin), divides that number by 2.20462 (this is the wrong conversion but im still going to use
    //this number cause you want me to), and then
    // prints it to the screen. This will convert pounds to kg.
    // (200 pounds is equal to 90.7186 kilograms)
    double D;
	cout << "Many pounds can you lift?" << endl;
    cin >> D;

    D /= 2.20462;
    cout << "This is how many Kilograms that is: " << D << "kg" << endl;

    fp_in.close();
    fp_out.close();


    return 0;
}
