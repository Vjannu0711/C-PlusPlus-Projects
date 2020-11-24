// Course Grade Calculator

#include <iostream>
#include <string>
#include <fstream>
using namespace std;
int main() {
	double number;
	double lowest;
	lowest = 0;
	int count = 0;
	double sum;
	double average = 0;
	sum = 0;
	double num = 0;

	ifstream scores;
	scores.open("dat_hw5_prob3.txt");
	if (scores.is_open()) {         // report the lowest number
		while (scores >> number) {
			if (lowest == 0) {
				lowest = number;
			}
			else if (number < lowest) {
				lowest = number;
			}

		}
	}
	else {
		cout << "Failed to open file!" << endl;
		exit(-1);
	}
	ifstream scorecount;
	scorecount.open("dat_hw5_prob3.txt");
	if (scorecount.is_open()) {         // report the average after finding lowest number
		while (scorecount >> num) {
			if (num != lowest) {
				sum += num;
				count++;
			}
		}

		average = sum / count;
	}
	else {
		cout << "Failed to open file!" << endl;
		exit(-1);
	}
	cout << "The average score is: " << average << endl;

	if (average >= 90)											// report final grade
	{
		cout << "The student's final grade is an A." << endl;
	}
	else if (average < 90 && average >= 80)
	{
		cout << "The student's final grade is a B." << endl;
	}
	else if (average < 80 && average >= 70)
	{
		cout << "The student's final grade is a C." << endl;
	}
	else if (average < 70)
	{
		cout << "The student's final grade is a D." << endl;
	}
	scores.close();
	scorecount.close();
	return 0;
}
