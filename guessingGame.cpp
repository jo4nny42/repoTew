#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cassert>
#include <string>

int guess;
int i=0;
int maxAttempts=6;

void intro(){
	std::cout<<"This game is a guessing game where you guess a number.\n";
}

void guessedNum(){
	std::cin>>guess;
}
int main(){
	srand(time(NULL));
  int numToGuess=(rand()%14)+1;
	intro();
	std::cout<<"Guess a number between 1 and 14.\n";
	guessedNum();
	assert(guess>0 && guess<14);
	for(int i=0; i<maxAttempts; i++){
		while(guess!=numToGuess){
		std::cout<<"guess again\n";
		guessedNum();
		assert(guess>0 && guess<14);
			}
	}
	if((i)==maxAttempts){
			std::cout<<"Out of luck\n";
			std::cout<<"The number was " << numToGuess<<"\n";
	}
	if(guess==numToGuess){
		std::cout<<"You guessed correct.\n";
	}
}