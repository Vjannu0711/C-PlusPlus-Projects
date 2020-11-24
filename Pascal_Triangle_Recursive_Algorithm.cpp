// Generate a Recursive AND NON-RECURSIVE Algorithm for the Pascal's Triangle sequence.

#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;


int c(int n, int k) {												// RECURSIVE ALGORITHM
	if (k == 0 || n == k) {
		return 1;
	}
	else if (k != 0 || n != k) {
		return (c(n - 1, k - 1) + c(n - 1, k));
	}
}

int factorial(int fact) {											// FACTORIAL FUNCTION
	int fac = 1;
	for (int i = 1; i <= fact; i++) {
		fac *= i;
	}
	return fac;
}
int nonrecursiveC(int n, int k) {									// NON-RECURSIVE ALGORITHM
	int sum = (factorial(n) / (factorial(k) * factorial(n-k)));
	return sum;
}

int main() {														// OUTPUT RESULTS
	int n = 6;
	int totalNonRecursive = 0;
	cout << "NON-RECURSIVE ALGORITHM:" << endl;
	cout << "========================" << endl;
	for (int k = 1; k <= n; k++) {
		totalNonRecursive = nonrecursiveC(n, k);
		cout << totalNonRecursive << setw(3);
	}
	cout << endl;
	cout << "========================" << endl;
	cout << endl;
	cout << "RECURSIVE ALGORITHM:" << endl;
	cout << "========================" << endl;
	for (int k = 1; k <= n; k++) {
		cout << c(n, k) << setw(3);
	}
	cout << endl;
	return 0;
}