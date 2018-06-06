
#include <iostream>
#include <cassert>
#include <chrono>
#include <ctime>
#include <thread>
#include <iomanip>
#include <fstream>

  std::string lUser;
  std::string lPass;

void newLogin(){
  std::ofstream logFile("players.txt");
	std::cout<<"Choose your username and password that you desire.(ctrl + Z is fiished)\n";
std::cin>>lUser>>lPass;
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

int main(){
  std::string logQ;
std::cout<<"Do you have a login?\n";
	std::cin>>logQ;
	if(logQ=="yes"||logQ=="Yes"||logQ=="YEs"||logQ=="yES"||logQ=="YeS"||logQ=="yEs"||logQ=="yeS"||logQ== "YES"){
		login();
	}else if(logQ=="no"||logQ=="NO"||logQ=="No"||logQ=="nO"){
		newLogin();
	}
	assert(logQ=="yes"||logQ=="Yes"||logQ=="YEs"||logQ=="yES"||logQ=="YeS"||logQ=="yEs"||logQ=="yeS"||logQ=="YES"|| logQ=="no"||logQ=="NO"||logQ=="No"||logQ=="nO");
}