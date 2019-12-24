#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	string foo;

	ifstream name;
	name.open("input_file_name.txt");

	name >> foo;

	cout << foo << endl;

	name.close();

}

