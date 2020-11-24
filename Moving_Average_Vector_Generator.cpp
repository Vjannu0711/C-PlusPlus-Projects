// Moving Average Vector Generator
// This program takes an input vector from the user of doubles called v
// and returns a vector called vout that displays the moving average.


// If any term in the above equation has a negative index, assume its value is zero.
// For example, for a vector{ 1.0, 2.0, 3.0, 4.0 }and n equals 2, the output vector
// should be { (1.0 + 0.0) / 2, (2.0 + 1.0) / 2, (3.0 + 2.0) / 2, (4.0 + 3.0) / 2 }. 
// For the same vector and n equals 3, the output vector should be
// { (1.0 + 0.0 + 0.0) / 3, (2.0 + 1.0 + 0.0) / 3, (3.0 + 2.0 + 1.0) / 3, (4.0 + 3.0 + 2.0) / 3 }.

#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<double> movingAverage(vector<double>& v, int n) {
	vector<double> vout;										// define vector
	int i, j;
	int numElements = v.size();									// number of elements = size of the vector
	for (i = 0; i < numElements; i++) {							// run through each element in the vector
		double term = 0;										// reset term to ZERO each time you move to a new element
		for (j = i; (i - j) < n; j--) {							// acquire the terms required for each element
			if (j < 0) {										// don't let it add negative numbers
				break;
			}
			else {
				term += (v[j] / n);								// add each term divided by n to the total
			}
		}
		vout.push_back(term);									// append each term into the vector as a new element
	}
	return vout;												// return the vector
}
int main() {
	vector<double> v = { 1.0, 2.0, 3.0, 4.0, 3.0, 3.5 };
	int n = 4;
	v = movingAverage(v, n);
	for (int val = 0; val < v.size(); val++) {
		cout << v[val] << "   ";
	}
	return 0;
}