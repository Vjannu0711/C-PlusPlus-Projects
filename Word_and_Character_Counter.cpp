// This program displays the number of words and characters in any given document.
// The string variable called 'filename'  on Line 31 can be modified to whatever the name is of the text document.

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
using namespace std;

void countDoc(const string &filename, int &wordCount, int &charCount) {				// create function
	ifstream doc;
	doc.open(filename);
	string numCharacters;
	while (!doc.eof()) {															// as long as we are reading the file
		getline(doc, numCharacters);
		int lengthOfString = numCharacters.length();								// find the length of the string and store in variable
		int spaceCount = 0;															// variable that stores the number of spaces
		for (int i = 0; i < lengthOfString; i++) {									// go from the beginning to the end of the file
			if (numCharacters[i] == ' ') {											// if there is a space, add 1 to the total number of spaces
				spaceCount++;
			}
			else {																	// if there is not a space, add 1 to the total number of characters
				charCount++;
			}
		}
		wordCount += spaceCount;													// the total number of words is equal to the total number of spaces plus 1
	}
}

int main() {
	string filename = "dat_hw7_prob1.txt";
	int wordCount = 1;																// number of words is 1 greater than the number of spaces, therefore set wordCount equal to 1
	int charCount = 0;
	countDoc(filename, wordCount, charCount);										// call function in main
	cout << "# OF WORDS: " << wordCount << endl;									// output number of words
	cout << endl;
	cout << "# OF CHARACTERS (EXCLUDING SPACES): " << charCount << endl;			// output nunber of characters excluding spaces
}