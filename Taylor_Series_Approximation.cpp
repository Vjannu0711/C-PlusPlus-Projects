#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int fact(int k) {										// find the factorial
	int fac = 1;
	for (int i = k; i >= 1; i--) {
		fac *= i;
	}
	return fac;
}
double taylor(int k, double x) {						// taylor series approximation
	double sum = 0;
	double numerator;
	double denominator;
	for (int i = 0; i < k; i++) {
		numerator = pow(x, i);
		denominator = fact(i);							// the factorial of i is the denominator in each iteration
		sum += (numerator / denominator);
	}
	return sum;
}
int main() {											// report the difference
	double x = 1.0;
	for (int k = 1; k <= 10; k++) {
		double difference = exp(x) - taylor(k, x);
		cout << "k = " << k << ": " << difference << endl;
	}
	return 0;
}