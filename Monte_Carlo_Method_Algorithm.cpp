// INSTRUCTIONS: Write a C++ program to estimate PI using the Monte Carlo method.
//
// Your program should ask the user to input the total number of random points (xi, yi) we will generate in the simulation.

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <cmath>

using namespace std;
int main() {
	int randPoints;																			   // user enters the number of random points
	cout << "Please enter the number of random points." << endl;
	cin >> randPoints;
	int count = 0;																			   // counter variable to assist in while loop
	double x, y;																			   // x and y coordinates for each random point
	int pointsInsideCircle;
	pointsInsideCircle = 0;																	   
	double percent;
	percent = 0;
	double piValue;																			   // will serve as the estimated PI value that is generated
	double pi;
	pi = 2 * acos(0.0);
	double difference;
	srand(time(NULL));

	while (count < randPoints) {
		x = double(rand()) / double(RAND_MAX);
		y = double(rand()) / double(RAND_MAX);
		if ((x * x + y * y) < 1) {																// if x squared plus y squared is less than one, the point is inside the circle
			pointsInsideCircle++;																// add one to the number of points in the circle
		}
		count++;
	}
	percent += pointsInsideCircle;
	percent /= randPoints;
	piValue = percent * 4;																		// multiply the percentage of points by 4 because there are four quadrants total
	difference = pi - piValue;
	cout << "The difference PI and the estimated PI value is: " << difference << endl;
}