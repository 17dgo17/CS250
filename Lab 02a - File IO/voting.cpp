#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int menuChoice;
    
    int pizzaVotes = 0;
    int samosaVotes = 0;
    int sushiVotes = 0;
    int tacoVotes = 0;
    
    while ( true )
    {
        cout << endl << endl
        << "What is the best food?" << endl << endl;
        cout << "1. Vote for PIZZA" << endl;
        cout << "2. Vote for SAMOSA" << endl;
        cout << "3. Vote for SUSHI" << endl;
        cout << "4. Vote for TACO" << endl;
        cout << "5. Quit and tally votes" << endl;
        
        cin >> menuChoice;
        if(menuChoice==1){
            pizzaVotes++;
        }
        if (menuChoice==2) {
            samosaVotes++;
        }
        if (menuChoice==3) {
            sushiVotes++;
        }
        if (menuChoice==4) {
            tacoVotes++;
        }
        if ( menuChoice == 5 )
        {
            break;
        }
        ofstream file;
        file.open( "food.txt" );
        file<< "Pizza:"<<pizzaVotes<<endl;
        file<< "Samosa:"<<samosaVotes<<endl;
        file<< "Sushi:"<<sushiVotes<<endl;
        file<< "Taco:"<<tacoVotes<<endl;
        file.close();

        // TODO: Depending on what the user voted for,
        // add +1 to the votes variable.
    }
    
    // TODO: Output tallies to output file
    
    return 0;
}