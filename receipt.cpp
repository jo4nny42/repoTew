#include <iostream>
#include <cassert>
#include <ctime>
#include <cmath>
#include <string>
#include <thread>
#include <iomanip>

<<<<<<< HEAD
std::string toll="$15";
double total;
double change;
=======
int toll=15;
>>>>>>> 539d8b14933f4ad52a10819fffeb71e7dcb7fc82
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
<<<<<<< HEAD
  } while (cardNumbs.size()>17);
=======
  } while (cardNumbs.size()>17); 
>>>>>>> 539d8b14933f4ad52a10819fffeb71e7dcb7fc82
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
<<<<<<< HEAD
    std::cout<<"/                  Your change is:"<<" "<<change<<"                      /\n";
=======
>>>>>>> 539d8b14933f4ad52a10819fffeb71e7dcb7fc82
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