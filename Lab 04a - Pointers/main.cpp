#include <iostream>
#include <string>
using namespace std;

void Program1()
{
    int myInt=25;
    float myFloat=1.25;
    string myString="Rick";
    
    cout<< "Address: "<<&myInt<<" = "<<myInt<<endl;
    cout<<"Address: "<< &myFloat<< " = "<< myFloat<<endl;
    cout<<"Address: "<< &myString<<" = "<< myString<<endl;
}

void Program2()
{
    string schools[4];
    schools[0]="JCCC";
    schools[1]="UMKC";
    schools[2]="KU";
    schools[3]="MS&T";
    
    cout<<"Array address: "<<schools<<endl;
    for (int i=0; i<4; i++)
    {
        cout << "Item "<<i<<" address " << &schools[i] << "    Value: "<< schools[i]<<endl;

    }
}

void Program3()
{
    int myInt=25;
    float myFloat=1.25;
    string myString="Rick";
    int* ptrInt=&myInt;
    float* ptrFloat=&myFloat;
    string* ptrString=&myString;
    
    cout<< ptrInt<<" = "<< myInt<<endl;
    cout<< ptrFloat<<" = "<< myFloat<<endl;
    cout<< ptrString<<" = "<< myString<<endl;
}

void Program4()
{
    string choice;
    cout<< " How many bytes is it?"<<endl;
    cout<< " Choose one of the following data types:"<<endl<<
    " [i]nt, [f]loat, [b]oolean, or [d]ouble?"<<endl;
    cin>> choice;
    if (choice=="i")
    {
        cout<<"An integer size is: " << sizeof( int ) << " bytes" << endl;
    }
    if (choice=="b")
    {
        cout<<"A boolean size is: "<<sizeof(bool)<< " bytes"<<endl;
    }
    if (choice=="f")
    {
        cout<<"A float size is: "<<sizeof(float)<<" bytes"<<endl;
    }
    if (choice=="d")
    {
        cout<< " A double size is: "<<sizeof(double)<<" bytes"<<endl;
    }
   
}

void Program5()
{
    float priceHamburger=5.00;
    float priceFries= 2.50;
    float priceSalad= 6.00;
    float priceDefault = 0;
    float* ptrPrice= nullptr;
    string choice;
    
    cout<<"Do you want a [h]amburger, [f]ries, or [s]alad?"<<endl;
    cin>> choice;
    if (choice=="h")
    {
        ptrPrice=&priceHamburger;
    }
    if (choice=="f")
    {
        ptrPrice=&priceFries;
    }
    if (choice=="s")
    {
        ptrPrice=&priceSalad;
    }
    else if( choice!= "h" && choice!="f" && choice!="s") /* for some reason just using an else statement it'd set values to 0??*/ 
    {
        ptrPrice=&priceDefault;
    }
    float taxRate=0.065;
    float taxAmount=(*ptrPrice*taxRate);
    float pricePlusTax=(*ptrPrice+taxAmount);
    cout<<"Original Price: "<< *ptrPrice<<endl;
    cout<<"Tax amount: "<< taxAmount<<endl;
    cout<<"With tax price: "<<pricePlusTax<<endl;
}

void Program6()
{
    string students[3];
    students[0]= "Dan";
    students[1]="Jon";
    students[2]="Mat";
    int id;
    string* ptrStudent=nullptr;
    
    cout<< "Enter 0, 1, or 2: "<<endl;
    cin>>id;
    ptrStudent=&students[id];
    cout<< "Enter a new name "<<endl;
    cin>> *ptrStudent;
    for (int i=0; i<3; i++) {
        cout<< "Student " << i<< " = "<< students[i]<<endl;
    }
    
}

int main()
{
    bool done = false;
    while ( !done )
    {
        cout << "1. Run Program1" << endl;
        cout << "2. Run Program2" << endl;
        cout << "3. Run Program3" << endl;
        cout << "4. Run Program4" << endl;
        cout << "5. Run Program5" << endl;
        cout << "6. Run Program6" << endl;
        cout << "7. Exit" << endl;
        
        int choice;
        cin >> choice;
        
        switch( choice )
        {
            case 1:     Program1();     break;
            case 2:     Program2();     break;
            case 3:     Program3();     break;
            case 4:     Program4();     break;
            case 5:     Program5();     break;
            case 6:     Program6();     break;
            case 7:     done = true;     break;
        }
    }
    
    return 0;
}