// Fibonacci Sequence Calculator

#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<int> FibonacciVec(int N) {
	int term1 = -1;
	int term2 = 1;
	int termNew;
	vector<int> vectorX;
	for (int i = N; i > 0; i--) {								// generate a loop where the first two terms will increase by 1 each time after being added together
		termNew = term1 + term2;
		term1 = term2;											// first term = next term
		term2 = termNew;										// second term = next term (the sum of the two terms)
		vectorX.push_back(termNew);								// before looping again, append the value into the list
	}
	return vectorX;
}
int main() {
	int k;
	cout << "Please enter the number of terms: " << endl;
	cin >> k;
	cout << endl;
	cout << "# OF TERMS: " << k << endl;
	cout << "Fibonacci Sequence:  ";
	vector<int> x;
	x = FibonacciVec(k);
	for (int i = 0; i < x.size(); i++) {
		cout << x[i] << "  ";
	}
	return 0;
}