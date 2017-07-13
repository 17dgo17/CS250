#include <string>
#include <iostream>
using namespace std;
int main()
{
    int choice;
    cout<< "What is your favorite fruit?"<<endl;
    cout<< "1. Apple"<<endl;
    cout<<"2. Banana"<<endl;
    cout<<"3. Pear"<<endl;
    cout<<"4. Strawberry"<<endl;
    cin>>choice;
    cout<<"Your selection: "<< choice<<endl;
    if (choice>=1 && choice <=4) {cout<<"Good choice"<<endl;}

    else cout<<"Choice invalid"<<endl;
    return 0;
}