//simple if statements to guess the number
#include <iostream>
using namespace std;
#define GUESSES 5

int main() {

	char firstName[25];
	int answer = rand() % 10 + 1;
	int guess = 0;
	cout << "for testing purposes the answer is" << answer << endl;

	cout << "Please Enter your name" << endl;
	cin >> firstName;
	cout << "Hello " << firstName << "I am thinking of a number between 1 to 10 what is it? You get 5 guesses" << endl;
	cin >> guess;

	while (guess != answer) {
		if (guess < answer) {
			cout << "Your Guess is too low! Try again." << endl;
			cin >> guess;
		}
		else if (guess > answer) {
			cout << "Your guess is too high! Try again." << endl;
			cin >> guess;
		}
		else {
			cout << "Your answer is correct!" << endl;
		}
	}

}

