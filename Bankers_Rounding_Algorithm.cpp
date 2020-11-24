/* Banker's Rounding Algorithm */
#include <iostream>
#include <string>

using namespace std;
int main() {
	double num;
	cout << "Please enter a number: " << endl;
	cin >> num;
	int roundedNum = int(num);
	if ((num - roundedNum) == 0) {
		cout << roundedNum << endl;
	}
	else if ((num - roundedNum) < 0.5) {
		cout << roundedNum << endl;
	}
	else if ((num - roundedNum) > 0.5) {
		roundedNum += 1;
		cout << roundedNum << endl;
	}
	else if ((num - roundedNum) == 0.5) {
		if (roundedNum % 2 == 0) {
			cout << roundedNum << endl;
		}
		else {
			roundedNum += 1;
			cout << roundedNum << endl;
		}
	}
	return 0;
}