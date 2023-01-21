#include <iostream>
#include<ctime>
#include<random>
#include<conio.h>
using namespace std;
class game {

public:
	void guessGame() {
		int num = 10;


		int guess;
		int score = 0;
		for (int i = 1; i <= num; i++) {
			getch();
			int r = 1 + rand() % 6;

			cout << "\t\t\t-----------------------------------" << endl;
			cout << "\t\t\tTurn # " << i << endl;
			cout << "\t\t\tDice Rolled......." << endl;
			cout << "\t\t\tEnter Your guess :";
			cin >> guess;
			if (guess == r) {
				cout << "\t\t\tGuess Matched !!!!! Lucky " << endl;
				++score;
			}
			else {

				cout << "\t\t\tWrong Guess !!!!" << endl;
				cout << "\t\t\tActual Number Was: " << r << endl;

			}
			cout << "\t\t\tScore : " << score << endl;

		}
		
		if (score >= 3) {
			cout << "\n \t\t\tYou Win ";
		}
		else {
			cout << "\t\t\t You Lose ";
		}
		cout<< "\tYour Total Score is : " << score << endl;




	}
};

int main() {
	system("COLOR 60");
	game g1;
	g1.guessGame();
}