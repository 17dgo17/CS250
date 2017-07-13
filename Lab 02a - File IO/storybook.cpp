#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
    // TODO: Create an ifstream variable named "input"
    
    // TODO: Open the story.txt file
    
    string line;
    ifstream input;
    input.open("story.txt");
    
    while ( getline( input, line ) )    // Keep reading in lines of text
    {
        cout << line << endl;   // Display text to the screen
    }
    input.close();
    // TODO: Close the input file
    
    return 0;
}