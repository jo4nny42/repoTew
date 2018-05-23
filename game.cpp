	#include "game.h"
game::game(){
	pHealth=10;
	eHealth=rand()%1+10;
	damage=rand()%1+5;
	lost=false;
	monsterEncounter=rand()%1+10;
}

void game::newGame(){
	std::cout<<"\n";
}

void game::continueGame(){
	std::cout<<"\n";
}

void game::options(){
	std::cout<<"\n";
}

void game::endGame(){
	std::cout<<"\n";
}

void game::credits(){
	std::cout<<"Game made by\n";
	std::cout<<"MIIIIII!!!!!!!!\n";
}

void game::startScreen(){
	std::cout<<"Choose your fate\n";
	std::this_thread::sleep_for(std::chrono::seconds(2));
	std::cout<<"a)New Game\n";
	std::cout<<"b)Continue\n";
	std::cout<<"c)Options\n";
	std::cout<<"d)Exit\n";
	std::cout<<"e)Credits\n";
	std::cin>>choice;
		if (choice=="a"){
			newGame();
		}
			if (choice=="b"){
				continueGame();
			}
				if (choice=="c"){
					options();
				}
					if (choice=="d"){
						endGame();
					}
						if (choice=="e"){
							credits();
						}
}

void newLogin(){
	std::cout<<"Choose your username and password that you desire.(ctrl + Z is finshed)\n";
std::cin>>lUser>>lPass;
  std::ifstream()
	logFile<< lUser <<' '<< lPass <<"\n";
}

void login(){
  std::ifstream logFile("players.txt");
  logFile>>lUser>>lPass;
  std::cout<<"Login initiated .";
  std::this_thread::sleep_for(std::chrono::seconds(2));
  std::cout<<".";
  std::this_thread::sleep_for(std::chrono::seconds(2));
  std::cout<<".\n";
  /*std::cout<<"Enter your username and password.\n";*/
   std::cout<<"Username: "<< lUser <<" Pasword: "<< lPass<<"\n";
}

void game::introduction(){
	std::this_thread::sleep_for(std::chrono::seconds(2));
	std::cout<<"Welcome to the game that is not thought of yet.\n";
	std::this_thread::sleep_for(std::chrono::seconds(2));
}

void game::story(){
	std::cout<<"Do you have a login?";
	std::cin>>logQ;
	if(logQ=="yes"||logQ=="Yes"||logQ=="YEs"||logQ=="yES"||logQ=="YeS"||logQ=="yEs"||logQ=="yeS"||logQ== "YES"){
		login();
	}
	if(logQ=="no"||logQ=="NO"||logQ=="No"||logQ=="nO"){
		newLogin();
	}
	assert(logQ=="yes"||logQ=="Yes"||logQ=="YEs"||logQ=="yES"||logQ=="YeS"||logQ=="yEs"||logQ=="yeS"||logQ=="YES");
	  assert(logQ=="no"||logQ=="NO"||logQ=="No"||logQ=="nO");
	introduction();
	if(lost==false){
		std::cout<<"You woke up in the middle of nowhere in a pool of some liquid substance where you call out hoping for a response.\n";
		std::this_thread::sleep_for(std::chrono::seconds(2));
		std::cout<<"(a)Investigate\n";
		std::cout<<"(b)Go to sleep\n";
		std::cin>>bigChoiceOne;
if(bigChoiceOne=="a"){
		std::cout<<"You walk to the source of the sound.\n";
		std::this_thread::sleep_for(std::chrono::seconds(2));
		std::cout<<"But as you walk closer the sound seems further away.\n"; 
	}else if(bigChoiceOne=="b"){
		std::cout<<"You wake up in the moring with scars that you don't remember getting\n";
	}
		std::cout<<"There are weird footsteps in the ground\n";
		std::cin>>choiceTwo;
		std::cout<<"(A)Follow the steps\n";
		std::cout<<"(B)Find your own path\n";
if (choiceTwo=="A"){
	std::cout<<"A strange figure appears\n";
}else if(choiceTwo=="B"){
	std::cout<<".\n";
	}
else if(lost==true){
	gameOver();
	}
}
}