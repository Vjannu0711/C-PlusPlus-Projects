#include <iostream>
#include <string>
using namespace std;
int main() {
	int user_input_num;
	cout << "Please enter a positive integer." << endl;
	cin >> user_input_num;
	if (user_input_num > 0) {													/* if number is positive */
		if ((user_input_num % 3 == 0) && (user_input_num % 5 == 0)) {			/* if number is divisible by 3 and 5 */
			cout << "FizzBuzz" << endl;
		}
		else if ((user_input_num % 3 == 0) && (user_input_num % 5 != 0)) {		/* if number is divisible by 3 but not divisible by 5 */
			cout << "Fizz" << endl;
		}
		else if ((user_input_num % 3 != 0) && (user_input_num % 5 == 0)) {		/* if number is not divisible by 3 but divisible by 5 */
			cout << "Buzz" << endl;
		}
		else {																	/* if number is not divisible by 3 or 5 */
			cout << user_input_num << endl;
		}
	}
	else {																		/* if the number is not a positive integer */
		cout << "The number you have entered is not a positive integer. Please rerun the program and enter a positive integer." << endl;
	}
	return 0;
}