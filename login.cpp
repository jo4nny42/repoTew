
#include <iostream>
#include <cassert>
#include <chrono>
#include <thread>
#include <iomanip>
#include <fstream>

  int lUser;
  int lPass;

void newLogin(){
	std::cout<<"Choose your username.";
	std::cin>>lUser;
	std::cout<<"Choose your password;";
	std::cin>>lPass;
}

void login(){
std::cout<<"Login initiated .";
std::this_thread::sleep_for(std::chrono::seconds(2));
std::cout<<".";
std::this_thread::sleep_for(std::chrono::seconds(2));
std::cout<<".";
std::cout<<"Enter your username.";
std::cin>>lUser;
std::cout<<"Enter your password;";
std::cin>>lPass;
}

int main(){
  std::cout<<"Hi\n";
  
}