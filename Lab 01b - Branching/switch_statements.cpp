#include <string>
#include <iostream>
using namespace std;

int main ( )
{  float a, b;
    int selection;
    cout<< "Enter a"<<endl;
    cin>> a;
    cout<<"Enter b"<<endl;
    cin>>b;
    cout<< "What kind of operation?"<<endl;
    cin>> selection;
    switch(selection)
    { case 1: cout<< a + b<<endl;
            break;
            
        case 2: cout<< a-b<<endl;
            break;
            
        case 3: cout<< a*b<<endl;
            break;
            
        case 4: cout<< a/b<<endl;
            break;
            
        default: cout<< "selection is invalid"<<endl;
            break;
    
    }
    return 0;
}