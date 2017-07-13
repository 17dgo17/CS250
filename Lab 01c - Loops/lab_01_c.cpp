#include <iostream>
#include <string>
using namespace std;

// Function 1
void F1_CountingUp()
{
	cout << "F1_CountingUp" << endl;
	int counter = 0;
	cout << "WHILE LOOP" << endl;
	while (counter < 10) {
		cout << counter << "     ";
		counter++; 
		
	}
	cout << endl;
	cout << "FOR LOOP" << endl;
	for (counter = 0; counter < 10; counter++) {
		cout << counter << "     ";
	}

}
// Function 2
void F2_MultiplyUp()
{
	cout << "F2_MultiplyUp" << endl;
	int counter = 1;
	cout << "WHILE LOOP" << endl;
	while (counter < 200) {
		cout << counter << "     ";
		counter*=2;

	}
	cout << endl;
	cout << "FOR LOOP" << endl;
	for (counter = 1; counter < 200; counter*=2) {
		cout << counter << "     ";
	}
}

// Function 3
void F3_NumberGuesser()
{
	cout << "F3_NumberGuesser" << endl;
	int secretNumber = 16, playerGuess;
	do {
		cout << "Enter your guess" << endl;
		cin >> playerGuess;
		if (playerGuess > secretNumber) {
			cout << "Too high!" << endl;
		}
		else if (playerGuess < secretNumber) {
			cout << "Too low!" << endl;
		}
	} while (playerGuess != secretNumber);
	cout << "Congrats you win" << endl;

} 
		
	


// Function 4
void F4_InputValidator()
{
	cout << "F4_InputValidator" << endl;
	cout << "Please enter a number between 0 and 5" << endl;
	int choice;
	cin >> choice;
	while (choice < 0 || choice>5) {
		cout << "Invalid entry. Try again" << endl;
		cin >> choice;
	}
	cout << "Thank you";
}

// Function 5
void F5_GettingARaise()
{
	cout << "F5_GettingARaise" << endl;
	float startingWage, percentRaisePerYear, adjustedWage;
	int yearsWorked;
	cout << "What is your starting wage?" << endl;
	cin >> startingWage;
	cout << "What % of a raise do you get per year?" << endl;
	cin >> percentRaisePerYear;
	cout << "How many years have you worked?" << endl;
	cin >> yearsWorked;
	adjustedWage = startingWage;
		for (int years = 0; years < yearsWorked; years++) {
			adjustedWage = (adjustedWage * percentRaisePerYear) + adjustedWage;
		} cout << "Your new wage is " << adjustedWage << endl;
}

// Function 6
void F6_Summation()
{
	float sum=0;
	cout << "F6_Summation" << endl;
	for ( int total = 0; total <= 10; total++) {
		sum = total+sum;
	} cout << "Sum is:" << sum << endl;
}

/* Don't modify the code below! ****************************************/

int main()
{
	F1_CountingUp();
	cout << endl << endl;

	F2_MultiplyUp();
	cout << endl << endl;

	F3_NumberGuesser();
	cout << endl << endl;

	F4_InputValidator();
	cout << endl << endl;

	F5_GettingARaise();
	cout << endl << endl;

	F6_Summation();
	cout << endl << endl;


	cout << endl << endl;
	while (true);
	return 0;
}