#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;
int main() {
	double x;
	double y;
	cout << "Please enter a number: " << endl;
	cin >> x;
	cout << "Now, enter another number: " << endl;
	cin >> y;
	float compute = sqrt(abs(x)) + sin(y);
	cout << setprecision(3) << "The answer is: " << compute << endl;
	return 0;
}