#include <iostream>
#include <string>
using namespace std;
    

bool IsPositive( int value )
{
    return ( value > 0 );
}


int main()
{
    int myNumber = 50;
    
    
    bool positive = false; // do not modify this line - it isn't the error.
    
    IsPositive( myNumber );
    
    if ( positive )
    {
        cout << "POSITIVE";
    }
    else
    {
        cout << "NEGATIVE";
    }
    
    
    return 0;
    
}
