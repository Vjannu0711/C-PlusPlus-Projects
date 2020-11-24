// Write a C++ function containsDuplicate that takes an input vector of integers called vecIn returns true if any value appears at least twice in the vectorand returns false if every element is distinct.
// Duplicate Elements in Vector Identification

#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool containsDuplicate(vector<int>& vecln) {
	int i, j;
	int numElements = vecln.size();
	for (i = 0; i < numElements; i++) {						// select an element
		for (j = i + 1; j < numElements; j++) {				// check if selected element is in the list anywhere else
			if (vecln[i] == vecln[j]) {						// if yes, return true
				return true;
			}
		}
	}
	return false;											// otherwise it's false
}
int main() {
	vector<int> vecln = {3, 5, -1, 9, -3, 8};				// create vector and include its values
	if (containsDuplicate(vecln)) {							// if the function returns true, print "true"
		cout << "true" << endl;
	}
	else {													// otherwise, print "false"
		cout << "false" << endl;
	}
	return 0;
}