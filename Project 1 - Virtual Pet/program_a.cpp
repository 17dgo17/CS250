#include "pa_virtual_pet.hpp"

#include <iostream>
#include <string>
using namespace std;

int main()
{   int choice;
    string petName;
    int hungerPercent=-5;
    int happinessPercent=100;
    int healthPercent=100;

    // 1. Initialize hungerPercent to 0, happinessPercent to 100,
    // and healthPercent to 100.
    

    cout << "Enter your pet's name: ";

    // 2. Get the user's input and store it in petName.
    cin>> petName;

    bool quit = false;
    while ( !quit ) // game loop
    {
        cout << endl << endl;
        cout << "---------------------------" << endl;

        UpdatePet( hungerPercent, happinessPercent, healthPercent );{
            if (hungerPercent>75) {
                healthPercent=healthPercent-10;
                happinessPercent=happinessPercent-10;
            }
            if (hungerPercent>49 && hungerPercent<76) {
                healthPercent=healthPercent-5;
                happinessPercent=happinessPercent-5;
            }
            if (hungerPercent>24 && hungerPercent<51) {
                healthPercent=healthPercent-2;
                happinessPercent=happinessPercent-2;
            }
            (hungerPercent=hungerPercent+5);
            if (hungerPercent>100) {
                hungerPercent=100;
            }
            if (healthPercent<0) {
                healthPercent=0;
            }
            if (happinessPercent<0) {
                happinessPercent=0;
            }
            if (happinessPercent>100){
                happinessPercent=100;
            }
            if (healthPercent>100) {
                healthPercent=100;
            }
            if (hungerPercent<0) {
                hungerPercent=0;
            }
        }
        
        DrawPet( healthPercent );{
            if (healthPercent>74) {
                cout<< "( ^_^ )"<<endl;
                cout<< endl;
            }
            if (healthPercent>49 && healthPercent<75) {
                cout<<"( o_o )"<<endl;
                cout<<endl;
            }
            if (healthPercent>24 && healthPercent<50) {
                cout<<"( ._. )" <<endl;
                cout<<endl;
            }
            if (healthPercent<25) {
                cout<<"( x_x )" <<endl;
                cout<<endl;
            }
        }
        DisplayPetStats( petName, hungerPercent, happinessPercent, healthPercent );{
            cout<< "Name: "<<petName<<endl;
            cout<< "Hunger: "<<hungerPercent<<endl;
            cout<<"Happiness: "<<happinessPercent<<endl;
            cout<<"Health: "<<healthPercent<<endl;
        }
        

        // 3. Check if pet's health is less than or equal to 0.
        // if so, break out of the while loop.
        if (healthPercent<=0){
            cout<< "Your pet died :("<<endl;
            break;
        }

            DisplayMainMenu();{
            cout<<endl;
            cout<< "1. Feed pet"<<endl;
            cout<< "2. Play with pet"<<endl;
            cout<< "3. Heal pet"<<endl;
            cout<< "4. Quit"<<endl;
            cin>> choice;
            if (choice==1) {
                hungerPercent=hungerPercent-8;
            }
            else if (choice==2){
                happinessPercent=happinessPercent+5;
            }
            else if (choice==3){
                healthPercent=healthPercent+5;
            }
            else if (choice==4){
                quit=true;
            }
            
            
                
        }
        

        // 4. Choose which function to call based on the user's choice
    }

    return 0;
}
