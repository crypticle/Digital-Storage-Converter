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
#include <map>
using namespace std;

static enum StorageUnit { // Value definitions of the data storage units.
	evNotDefined, b, B, KB, MB, GB, Kb, Mb, Gb
};

static map<string, StorageUnit> s_mapStorageUnit; // Map to associate strings with the enum values.

static void Initialize();

const int oneByte = 8; // 1 byte (B) is equal 8 bits (bit)
const int oneKilobit = 1024;
const int oneKilobyte = 1024;
const int oneGigabyte = 1024; // 1 gigabyte(GB) is equal 1024 megabytes(MB)

int main()
{
	Initialize();
	string userString;
	string userUnit;
	size_t pos;

	cout << "Enter an amount of physical storage (e.g. 500 GB): ";
	cout.flush();
	getline(cin, userString);
	pos = userString.find(" "); // Finds the position of the space in variable "userString".
	float userNum = stoi(userString); // Parses string to integer. (e.g. converts string "10xyz" to integer 10).
	userUnit = userString.substr(pos + 1); // Extracts everything after the space and save it to variable "userUnit".
	
	if (userUnit.length() > 2)
	{
		cout << "Invalid storage format!";
	}
	else
	{
		switch (s_mapStorageUnit[userUnit])
		{
		case b:
			cout << "bits detected" << endl;
			break;
		case B:
			cout << "Bytes detected" << endl;
			break;
		case KB:
			cout << "Kilobytes detected" << endl;
			break;
		case MB:
			cout << "Megabytes detected" << endl;
			break;
		case GB:
			cout << "Gigabytes detected" << endl;
			break;
		case Kb:
			cout << "Kilobits detected" << endl;
			break;
		case Mb:
			cout << "Megabits detected" << endl;
			break;
		case Gb:
			cout << "Gigabits detected" << endl;
			break;
		default:
			cout << "No storage Unit detected" << endl;
		}
	}





	/* Second half of String
	 1. Separate string by space
	 2. discard first half of string
	 3. Read second half of string
	 4. compare string character by character.
	*/

	



	// Parses the input string.

}

void Initialize()
{
	s_mapStorageUnit["b"] = b;
	s_mapStorageUnit["B"] = B;
	s_mapStorageUnit["KB"] = KB;
	s_mapStorageUnit["MB"] = MB;
	s_mapStorageUnit["GB"] = GB;
	s_mapStorageUnit["Kb"] = Kb;
	s_mapStorageUnit["Mb"] = Mb;
	s_mapStorageUnit["Gb"] = Gb;

}

// Sources : https://www.codeguru.com/cpp/cpp/cpp_mfc/article.php/c4067/Switch-on-Strings-in-C.htm
