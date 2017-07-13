// lab01a_recipes.cpp : Defines the entry point for the console application.
//
#include <stdafx.h>
#include <iostream>     // Input/output library
using namespace std;    // Standard C++ library namespace

int main()

{
	double ratio; 
	float teaspoons_of_baking_soda=1.0, cups_of_butter=1.0 , egg=1.0 ;
	double teaspoons_of_baking_powder = .5 , cups_of_white_sugar = 1.5 ;
	cout << "How many batches would you like to make" << endl;
		cin >> ratio; 

	cout <<teaspoons_of_baking_soda * ratio<< " teaspoons of baking soda"<< endl;

	cout <<teaspoons_of_baking_powder * ratio<<" teaspoons of baking powder" << endl;

	cout<<cups_of_butter * ratio<<" cups of butter" << endl;

	cout<<cups_of_white_sugar * ratio<<" cups of white sugar" << endl;

	cout<<egg * ratio<<" number of eggs" << endl; 
	
	while (true);    // Program stops here
	return 0;
}