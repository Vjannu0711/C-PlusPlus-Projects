#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
using namespace std;

int main() {
	ofstream table;
	table.open("MultiplicationTable.txt");					// create a text file
	for (int i = 1; i <= 9; i++) {							// generate rows 1-9
		table << endl;										// after data for each row is entered, go to the next row
		for (int j = 1; j <= i; j++) {						// generate data for each row
			table << setw(3) << (i * j) << " ";				// output the data and appropriate spacing
		}
	}
	table.close();											// close file
	return 0;
}