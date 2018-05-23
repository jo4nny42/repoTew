#include <iostream>
#include <cassert>
#include <iomanip>
#include <cmath>
#include <string>
#include <thread>

double total;
double change;
std::string adress="New York, NY 10036";
std::string storeName="Port Authority";
std:: string pNumber="(212) 971-6789";

void money(){
std::string credCard;
std::cout<<"Insert your credit card number a minimum of 16 numbers.";
std::cin>>credCard;
}

void date(){
  std::cout<<"The date is:\n";
}

void draw(){
	std::cout<<std::setfill('/')<<std::setw(60)<<"\n";
	std::cout<<"/     	             "        <<storeName <<"                       /\n";
	std::cout<<"/                 "          <<adress<<"                      /\n";
	std::cout<<"/                    "<<pNumber<<"                       /\n"; 
  std::cout<<"/                                                         /\n";
	std::cout<<"/                  Your total is "<<total<<"                        /\n";
	std::cout<<"/                  You  gave:                             /\n";
    std::cout<<"/                  Your change is: "<<change<<"                      /\n";
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
  draw();
	return 0;
}