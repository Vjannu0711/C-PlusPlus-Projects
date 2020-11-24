// Write a C++ program to estimate PI using the numerical integration method.

#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main() {
	int n;
	cout << "Please enter the number of rectangles: " << endl;
	cin >> n;
	double width = 1.0 / n; 
	double sum = 0.0;
	double area = 0.0;
	double pi = 2 * acos(0.0);						// standard pi value defined
	for (int i = 1; i <= n; i++) { 
		double xi = (i - 1) * width; 
		double height = sqrt(1 - (xi * xi));
		area = height * width;						// A = H x W
		sum += area;								// add area of one rectangle to the total sum
	}
	sum *= 4;
	double error = sum - pi;						// report error or difference between sum and pi
	cout << "The error is: " << error << endl;
}