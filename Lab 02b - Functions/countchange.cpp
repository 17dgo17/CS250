#include <iostream>
#include <string>
using namespace std;

float CountChange(int quarterCount,int dimeCount,int nickelCount,int pennieCount){
    float change= (quarterCount*.25)+(dimeCount*.1)+(nickelCount*.05)+(pennieCount*.01);
    return change;
}

int main()
{
    while ( true )
    {
        int quarters, dimes, nickels, pennies;
        
        cout << "How many quarters? ";
        cin >> quarters;
        
        cout << "How many dimes? ";
        cin >> dimes;
        
        cout << "How many nickels? ";
        cin >> nickels;
        
        cout << "How many pennies? ";
        cin >> pennies;
        
        float money = CountChange( quarters, dimes, nickels, pennies );
        cout << "Money: $" << money << endl;
        
        cout << endl << endl;
    }
    
    return 0;
}