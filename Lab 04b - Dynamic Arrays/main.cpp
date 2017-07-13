#include <iostream>
#include <string>
using namespace std;
#include <cstdlib>
#include <ctime>


int main()
{

    int* myInt;
    float* myFloat;
    string* myStr;
    myInt= new int;
    myFloat= new float;
    myStr= new string;
    *myInt= 20;
    *myStr="Luiz";
    *myFloat=199.99;
    cout<< *myInt << "  "<<*myStr << "  "<<*myFloat<<endl;
    delete myInt;
    delete myFloat;
    delete myStr;
    
    int* myIntArr;
    string* myStrArr;
    float* myFloatArr;
    int size;
    
    myIntArr= new int;
    myStrArr= new string;
    myFloatArr= new float;
    *myFloatArr= size;
    *myIntArr= size;
    *myStrArr= size;
    
    cout<< "Enter array size:  ";
    cin>> size;
    for( int i=0; i<size; i++){
        cout<<"i = "<<i<<endl;
        cout<< "    Enter int value: ";
        cin>> *myIntArr;
        cout<< "    Enter string value: ";
        cin>> *myStrArr;
        cout<< "    Enter float value: ";
        cin>> *myFloatArr;
}
}