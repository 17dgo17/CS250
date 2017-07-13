#include <string>
#include <iostream>
using namespace std;
int main()
{
    float battery;
    cout<< "What is your charge"<<endl;
    cin>> battery;
    if (battery<=25) {cout<<"[* ]"<<endl;}
    else if (battery>=26 && battery<=50){cout<<"[** ]"<<endl;}
    else if (battery>=51 && battery<=75){cout<<"[*** ]"<< endl;}
    else cout<< "[**** ]"<<endl;
    return 0; 
    }
    
