// Calvin Le
// 1-20-2020
// Digital Storage Converter:
/*
	A program that asks the user to input an amount of physical storage (e.g., "500 GB") then convert the supplied number to all units of digital storage.
	In addition, the program will generate the amount of bits needed to address the amount of storage entered by the user.
*/

// I have neither given nor received unauthorized aid in completing this work, nor have I presented someone else's work as my own. ~ Calvin Le

#include <cstdio>
#include <iostream>
#include <string>
using namespace std;

const int oneMb = 0;

int main()
{
	string userString;
	int count = 0;
	cout << "Enter an amount of physical storage (e.g. 500 GB): ";
	cin >> userString;
	float userNum = stoi(userString); // Parses string to integer. (e.g. converts string "10xyz" to integer 10).

	/* Second half of String
	 1. Separate string by space
	 2. discard first half of string
	 3. Read second half of string
	 4. compare string character by character.
	*/

	



	// Parses the input string.

}

