// INSTRUCTIONS:

// A drunk man is 100 steps away from his home. Please write a C++ function that takes his current position and returns where he is next.
// His probability of taking a step toward his home is 2/3 and taking a step away is 1/3.
// Using this function, write a program that simulates his random walk starting at position 0 until he reaches his home position = 100.
// The program should count and display how many steps he took to reach his home.

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int randomStep(int position) {									// create function to determine if drunk man is going a step forward or step back
	double randNum;
	randNum = double(rand()) / double(RAND_MAX);				// generate random number between 0 and 1
	double oneThird = 0.33333;
	if (randNum > oneThird) {									// if it's greater than 1/3, the drunk man moves a step forward
		position++;
	}
	else if (randNum >= 0 && randNum <= oneThird) {				// if it's less than 1/3, the drunk man moves a step backwards
		position--;
	}
	return position;
}

int main() {
	int numSteps = randomStep(0);								// create a variable to call the function
	int count = 0;
	srand(time(NULL));
	while (numSteps != 100) {									// while the drunk man has not reached home
		numSteps = randomStep(numSteps);						// keep calling the function at his current position until he reaches 100 steps forward (his home)
		count++;
	}
	cout << "The total number of steps that the drunk man took to reach home is " << count << " steps." << endl;
	return 0;
}