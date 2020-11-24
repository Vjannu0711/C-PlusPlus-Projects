// INSTRUCTIONS:
//
// Complete a C++ program to compute the following sum:
// sum = 1 - 1/2 + 1/3 - 1/4 + 1/5 - ... + (-1)^n-1(1/n)

#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>

using namespace std;
int main() {
	double sum = 0;
	int n;
	cout << "Please enter a positive integer: " << endl;
	cin >> n;
	while (n <= 0) {									// check for positive integer
		cout << "You have entered an invalid integer. Please enter a positive integer: " << endl;
		cin >> n;
	}
	for (int i = 1; i <= n; i++) {
		double nextTerm = pow(-1, (i - 1)) / i;			// finds next term
		sum += nextTerm;								// add the next term to the final sum
	}
	cout << "Sum: " << setprecision(5) << sum << endl;  // report the final sum
	return 0;
}