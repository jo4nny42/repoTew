#include <iostream>
#include <cassert>
#include <ctime>
#include <cmath>
#include <string>
#include <thread>
#include <iomanip>

std::string toll="$15";
double total;
double change;
std::string storeName="Port Authority";
std::string address="New York, NY 10036";
std::string pNumber="(212) 971-6789";

void money(){
std::string cardNumbs;
int credAmount=100;
int toll=15;
int change=credAmount-toll;
credAmount=change;
std::cout<<"Insert your e-ZPass number a minimum of 16 numbers with.\n";
std::cin>>cardNumbs;
  do{
  std::cout<<"Invalid card number input\n";
  std::cin>>cardNumbs;
  } while (cardNumbs.size()>17);
}

void date(){
  std::cout<<"The date is:\n";
}

void draw(){
	std::cout<<std::setfill('/')<<std::setw(60)<<"\n";
	std::cout<<"/     	             "        <<storeName <<"                       /\n";
	std::cout<<"/                 "          <<address<<"                      /\n";
	std::cout<<"/                    "<<pNumber<<"                       /\n"; 
  std::cout<<"/                                                         /\n";
	std::cout<<"/                  Your toll is "<<toll<<"                       /\n";
    std::cout<<"/                  Your change is:"<<" "<<change<<"                      /\n";
	std::cout<<"/                                                         /\n";
	std::cout<<"/                                                         /\n";
	std::cout<<"/                                          	          /\n";
	std::cout<<"/                                                         /\n";
	std::cout<<"/                                                         /\n";
	std::cout<<"/                                                         /\n";
	std::cout<<"/                                                         /\n";
	std::cout<<"/                                                         /\n";
	std::cout<<"/                                                         /\n";
	std::cout<<"/                                                         /\n";
	std::cout<<"/                                                         /\n";
	std::cout<<"/                                                         /\n";
	std::cout<<"/                                                         /\n";
	std::cout<<"/                                                         /\n";
	std::cout<<"/                                                         /\n";
	std::cout<<"/                                                         /\n";
	std::cout<<"/                                                         /\n";
	std::cout<<"/                                                         /\n";
	std::cout<<"/                                                         /\n";
	std::cout<<"/                                                         /\n";
	std::cout<<"/                                                         /\n";
	std::cout<<"/                                                         /\n";
	std::cout<<std::setfill('/')<<std::setw(60)<<"\n";
}

int main(){
  money();
  draw();
	return 0;
}