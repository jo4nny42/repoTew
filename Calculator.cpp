#include <iostream>
#include <thread>
#include <string>
#include <ctime>
#include <cmath>
#include <chrono>
#include <cassert>

  double a;
  double b;
  double c;
  double x;
  double y;
  double h;
  double k;
  double exponent;
  double num;
  double num_One;
  double num_Two;
  double nums;
  int div_Answer;
  int mult_Answer;
  int add_Answer;
  int sub_Answer;
  std::string next_Choice;
  std::string answer;
  
void question(){
  std::cout<<" What type of math do you want to do? \n";
  std::this_thread::sleep_for(std::chrono::seconds(1));
  std::cout<<"Standard\n";
  std::this_thread::sleep_for(std::chrono::seconds(1));
  std::cout<<"Addition\n";
  std::this_thread::sleep_for(std::chrono::seconds(1));
  std::cout<<"Multiply\n";
  std::this_thread::sleep_for(std::chrono::seconds(1));
  std::cout<<"Divide\n";
  std::this_thread::sleep_for(std::chrono::seconds(1));
  std::cout<<"Subtract\n";
  std::cin>>answer;
  }

void standardForm(){
  std::cout<<"What is a?\n";
  std::cin>>a;
  std::cout<<"What is b?\n";
  std::cin>>b;
  std::cout<<"What is c?\n";
  std::cin>>c;
  std::cout<<"What is x?\n";
  std::cin>>x;
   exponent=pow(x,2);
  std::cout<<a*exponent+b*x+c<<"\n";
}

void quadraticForm(){
  std::cout<<"What is a?\n";
  std::cin>>a;
  std::cout<<"What is b?\n";
  std::cin>>b;
  std::cout<<"What is c?\n";
  std::cin>>c;
  exponent=pow(b,2);
 // std::cout<< -(b)+||- sqrt(exponent-(4*a*c)<<"\n";
}

void addition(){
  std::cout<<"What is your first number?\n";
  std::cin>>x;
  std::cout<<"What is your second number\n";
  std::cin>>y;
  double total=x+y;
  std::cout<<total<<"\n";
  if(next_Choice=="Yes"||next_Choice=="yes"){
  std::cout<<"What are your next two numbers?\n";
  std::cin>>num_One>>num_Two;
 total=(num_One+num_Two)+total;
  std::cout<<"Your new total is "<<total<<"\n";
}else if(next_Choice=="no"||next_Choice=="No"||next_Choice=="nO" ||next_Choice=="NO"){
    std::cout<<total<<"\n";
  }
  assert(next_Choice=="Yes"||next_Choice=="yes"||next_Choice=="no"||next_Choice=="No"||next_Choice=="nO" ||next_Choice=="NO");
}

void multiply(){
  std::cout<<"What is your first number?\n";
  std::cin>>x;
  std::cout<<"What is your second number\n";
  std::cin>>y;
  double total=x*y;
  std::cout<<total<<"\n";
  std::cout<<" Do you want to continue doing more math?\n";
  std::cin>>next_Choice;
if(next_Choice=="Yes"||next_Choice=="yes"){
  std::cout<<"What are your next two numbers?\n";
  std::cin>>num_One>>num_Two;
 total=(num_One*num_Two)+total;
  std::cout<<"Your new total is "<<total<<"\n";
}else if(next_Choice=="no"||next_Choice=="No"||next_Choice=="nO" ||next_Choice=="NO"){
    std::cout<<total<<"\n";
  }
  assert(next_Choice=="Yes"||next_Choice=="yes"||next_Choice=="no"||next_Choice=="No"||next_Choice=="nO" ||next_Choice=="NO");
}

void divide(){
  std::cout<<"What is your first number?\n";
  std::cin>>x;
  std::cout<<"What is your second number\n";
  std::cin>>y;
  double total=x/y;
  std::cout<<total<<"\n";
  if(next_Choice=="Yes"||next_Choice=="yes"){
  std::cout<<"What are your next two numbers?\n";
  std::cin>>nums;
 total=nums+total;
  std::cout<<"Your new total is "<<total<<"\n";
}else if(next_Choice=="no"||next_Choice=="No"||next_Choice=="nO" ||next_Choice=="NO"){
    std::cout<<total<<"\n";
  }
  assert(next_Choice=="Yes"||next_Choice=="yes"||next_Choice=="no"||next_Choice=="No"||next_Choice=="nO" ||next_Choice=="NO");
}

void subtract(){
  std::cout<<"What is your first number?\n";
  std::cin>>x;
  std::cout<<"What is your second number\n";
  std::cin>>y;
  double total=x-y;
  std::cout<<total<<"\n";
if(next_Choice=="Yes"||next_Choice=="yes"){
  std::cout<<"What are your next two numbers?\n";
  std::cin>>num_One>>num_Two;
 total=(num_One-num_Two)+total;
  std::cout<<"Your new total is "<<total<<"\n";
}else if(next_Choice=="no"||next_Choice=="No"||next_Choice=="nO" ||next_Choice=="NO"){
    std::cout<<total<<"\n";
  }
  assert(next_Choice=="Yes"||next_Choice=="yes"||next_Choice=="no"||next_Choice=="No"||next_Choice=="nO" ||next_Choice=="NO");  
}

void choice(){
  if (answer=="standard form"||answer=="Standard Form"){
    standardForm();
  }
  if(answer=="standard"||answer=="Standard"){
    standardForm();
  }
if(answer=="divide"||answer=="Divide"){
    divide();
  }
  
if (answer=="subtract"||answer=="Subtract"){
    subtract();
  }
  
if (answer=="addition"||answer=="Addition"){
    addition();
  }
  
if (answer=="multiply"||answer=="Multiply"){
    multiply();
}
  assert(answer=="divide"||answer=="Divide"||answer=="subtract"||answer=="Subtract"||answer=="addition"||answer=="Addition"||answer=="multiply"||answer=="Multiply"||answer=="standard"||answer=="Standard");
}
int main() {
  question();
  choice();
return 0;
}