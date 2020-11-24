// Flip coins. We will write a program to simulate a gambling game, where the rules are the following:
// (1) You will start with some money `moneyStart`,and you pick how many rounds you want to play, `nRounds`.
// (2) Once you start playing, for each round, you flip a fair coin.

// There is 50 % chance of heads, 50 % chance of tails.
// If you get a heads, you double the current money you have.
// If you get a tails, you lose half of your current money (cut your current money in half).
// Then for the next round, start with the new amount you have.
// At the end of `nRounds`, you get to keep all the money you have left.

// Create this game.

#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;
int main() {
	double moneyStart;
	cout << "Please enter the amount of money you would like to start with. " << endl;
	cin >> moneyStart;
	int nRounds;
	cout << "Please enter the number of rounds you would like to play. " << endl;
	cin >> nRounds;
	cout << "==========================================================" << endl;
	int count;
	count = 0;
	double x;
	while (count <= nRounds) {
		x = double(rand()) / double(RAND_MAX);
		if (x < 0.5) {
			moneyStart /= 2;
			cout << "Tails! Your money amount has dropped to: $" << moneyStart << endl;
		}
		else if (x > 0.5) {
			moneyStart *= 2;
			cout << "Heads! Your money amount has increased to: $" << moneyStart << endl;
		}
		count++;
	}
	cout << "==============================================" << endl;
	cout << "The final total amount of money you have is: $" << moneyStart << endl;
}