#include <iostream>
#include <iomanip>
#include <ctime>   
#include <string>
#include <cassert>
using namespace std;

int main(){
    string area;
    //Asking for area
    cout<<"Enter in the location that the ticket was given\n";
    getline(cin, area);
    string method, level; 
    
    double toll, change, payment;
    int lane, cardNumber; 
    
    time_t now;
	struct tm nowLocal;
	now=time(NULL);//Gets time from the OS
    nowLocal=*localtime(&now);

   /*cout<<"What Lane were you in\n";
    cin>>lane;
    cout<<"What level were you on\n";
    cin>>level;*/
    //Asks whether they are using an EZ pass or, cash
    cout<<"Are you using a ez pass or paying with cash. \n If ez pass enter in Ez or cash enter in cash\n";
    cin>>method;
    if(method == "EZ" || method == "Ez" || method == "eZ" || method == "ez"){
        cout<<"Enter in the last 6 digets your card number\n";  
        cin>>cardNumber;
        cout<<setfill ('*')<<setw (area.length()+15)<<"\n";
        cout<<area<<endl;
        cout<<"Lane:"<<lane<<endl;
        cout<<cardNumber<<endl;
    
        //Code Inorder to print the current time and date
        cout<<"Today is: "<<nowLocal.tm_mon+1<<"/"<<nowLocal.tm_mday<<"/"<<nowLocal.tm_year+1900<<endl;
	    cout<<"Time: "<<nowLocal.tm_hour<<":"<<nowLocal.tm_min<<":"<<nowLocal.tm_sec<<endl;
	    cin.get();
        //EZ pass is paying so they get 0 dollars back no matter what
        cout<<"Toll Paid: $0\n";
        //Final Statements
        cout<<"Continue supporting EZ Pass\n";
        cout<<"Thank You, Drive Safely\n";
        cout<<setfill ('*')<<setw (area.length()+15<<"\n";
    } else if (method == "cash" || method == "Cash" || method == "CASH") {
        //Prompts the user for the payment and the toll
        cout<<"How much was the toll and, how much did you pay. Enter in the toll first and then how much you payed.\n";
        cin>>toll>>payment;
        assert(payment>=toll);
        cout<<setfill ('*')<<setw (area.length()+15)<<"\n";
        cout<<area<<endl;
        cout<<"Lane: "<<lane<<endl;



        //Code Inorder to print the current time and date
        cout<<"Today is: "<<nowLocal.tm_mon+1<<"/"<<nowLocal.tm_mday<<"/"<<nowLocal.tm_year+1900<<endl;
	    cout<<"Time: "<<nowLocal.tm_hour<<":"<<nowLocal.tm_min<<":"<<nowLocal.tm_sec<<endl;
	    cin.get();
       //Ending sentences that display the toll, amount payed and inputed and then a final statement to get an ezpass
        cout<<"Toll is: "<<toll<<endl;
        cout<<"You Payed: "<< payment<<endl;
        cout<<"Toll Paid:$ "<<payment-toll<<endl;
        cout<<"Get E-ZPass today\n";
        cout<<"Save time & money\n";
        cout<<"Visit www.joinezpass.com\n";
        cout<<"Thank You, Drive Safely\n";
        cout<<setfill ('*')<<setw (area.length()+15)<<"\n";
    } else {
        cout<<"Enter in one of the options\n";
    }
    


    return 0;
}