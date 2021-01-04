// Question_1.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include "myString.h"
#include <string>
#include <iostream>
using namespace std;

int main()
{
	char s1[max_length];
	char s2[max_length];
	char s3[max_length];

	char s4[max_length];
	char s5[max_length];
	char s6[max_length];
	char s7[max_length];
	char s8[max_length];
	char s9[max_length];

	s1[0] = 'H'; s1[1] = 'e'; s1[2] = 'l'; s1[3] = 'l'; s1[4] = 'o';
	s2[0] = 'J'; s2[1] = 'a'; s2[2] = 'm'; s2[3] = 'e'; s2[4] = 's';
	s3[0] = 'h'; s3[1] = 'a'; s3[2] = 'p'; s3[3] = 'p'; s3[4] = 'y';

	// give me liberty or give me death  
	s4[0] = 'g'; s4[1] = 'i'; s4[2] = 'v'; s4[3] = 'e'; 
	s5[0] = 'm'; s5[1] = 'e'; 
	s6[0] = 'l'; s6[1] = 'i'; s6[2] = 'b'; s6[3] = 'e'; s6[4] = 'r', s6[5] = 't'; s6[6] = 'y'; 
	s7[0] = 'o'; s7[1] = 'r'; 
	s8[0] = 'd'; s8[1] = 'e'; s8[2] = 'a'; s8[3] = 't'; s8[4] = 'h'; 
	s9[0] = 'h'; s9[1] = 'i';
	// showing the strings  
	// part a
	myString string1(s1,5);
	myString string2(s2,5);
	myString string3(s3,5);
	myString string4;

	// for part g 
	myString string5(s4, 4);
	myString string6(s5, 2);
	myString string7(s6, 7);
	myString string8(s7, 2);
	myString string9(s8, 5);
	myString string10(s9, 2);

	myString string11;
	
	cout << "string #1" << endl;
	string1.print();

	cout << "string #2" << endl;
	string2.print();
		
	cout << "string #3" << endl;
	string3.print();
	
	cout  << " \n\n" << "Part B";

	//  part b // compare 
	if (string1.Compare(string2))
	{
		cout << endl;
		cout << "String 1 is same as String 2." << endl;
	}
	else
	{
		cout << endl;
		cout << "String 1 not the same as String 2." << endl;
	}

	// part c // copying 
	cout << " \n\n" << "Part C" << endl;
	cout << "string 1 to string 3: "<< endl;
	string3 = string1; 
	cout << "string 3 now = ";
	string3.print();

	// part d // Concatanate
	cout << " \n\n" << "Part D" << endl;
	cout << "Finding string#4 = String#1 + String#2" << endl;
	string4 = string1 + string2 ;
	cout << "New string #4 = ";
	string4.resize(string1.Length() + string2.Length() + 1);
	string4.print();

	// Part e // get length
	cout << " \n\n" << "Part E" << endl;
	cout << "Finding the lenght of string #3 ";
	string3.print();
    cout << "The lenght equals = " << string3.Length();

	// part f // as toUpperCase, to LowerCase
	cout << " \n\n" << "Part F" << endl;
	cout << "String#2 making to Upper Case: ";
	string2.toUpperCase(); 
	string2.print();
	cout << "String#2 making to Lower Case: ";
	string2.toLowerCase();
	string2.print();


	// part g///////////////////////////////////////////////////

	cout << " \n\n" << "Part G" << endl;
	cout << "string #1" << endl;
	string5.print();

	cout << "string #2" << endl;
	string6.print();

	cout << "string #3" << endl;
	string7.print();

	cout << "string #4" << endl;
	string8.print();

	cout << "string #5" << endl;
	string9.print();

	cout << "string #6" << endl;
	string10.print();

	

	cout << " \n\n" << "Part B";

	//  part b // compare 
	if (string5.Compare(string7))
	{
		cout << endl;
		cout << "String 4 is same as String 6." << endl;
	}
	else
	{
		cout << endl;
		cout << "String 4 not the same as String 7." << endl;
	}

	if (string8.Compare(string8))
	{
		cout << endl;
		cout << "String 8 is same as String 8." << endl;
	}
	else
	{
		cout << endl;
		cout << "String 8 not the same as String 8." << endl;
	}

	if (string10.Compare(string9))
	{
		cout << endl;
		cout << "String 10 is same as String 9." << endl;
	}
	else
	{
		cout << endl;
		cout << "String 10 not the same as String 10." << endl;
	}

	// part c // copying 
	cout << " \n\n" << "Part C" << endl;
	cout << "string 2 to string 6: " << endl;
	string10 = string6;
	cout << "string 5 now = ";
	string10.print();

	cout << "string 4 to string 6: " << endl;
	string10 = string8;
	cout << "string 5 now = ";
	string10.print();

	// part d // Concatanate
	// // give me liberty or give me death  
	cout << " \n\n" << "Part D" << endl;
	cout << "Finding string#7 = String#1 + String#2 + String#3 " << endl;
	string11 = string5 + string6 + string7 + string8 + string5  +  string6 + string8;
	cout << "New string #7 = ";
	string11.resize(string5.Length() + string6.Length() + string7.Length() +  2 );
	string11.print();

	// Part e // get length
	cout << " \n\n" << "Part E" << endl;
	cout << "Finding the lenght of 3 strings " << endl;
	string5.print();
	string8.print();
	string7.print();
	cout << "The lenght equals = " << string5.Length()+ string8.Length()+ string7.Length();

	// part f // as toUpperCase, to LowerCase
	cout << " \n\n" << "Part F" << endl;
	cout << "String#2 making to Upper Case: " << endl;
	string5.toUpperCase();
    string6.toUpperCase();
	string7.toUpperCase();
	string5.print();
	string6.print();
	string7.print();
	cout << "String#2 making to Lower Case: " << endl;
	string5.toLowerCase();
	string6.toLowerCase();
	string7.toLowerCase();
	string5.print();
	string6.print();
	string7.print();

	return 0;
}

/////////////////////////////////part h//////////////////////////////
/*
int main() { // using #include <string>
	string string1 = "Hello ";
	string string2 = "James ";
	string string3 = "happy ";

	string string4 = "give ";
	string string5 = " me ";
	string string6 = "liberty ";
	string string7 = "or ";
	string string8 = "death ";
	string string9 = "hi ";
	string string10;
	string string11;

	cout << "printing strings" << endl;
	cout << "String#1 " << string1 << endl;
	cout << "String#2 " << string2 << endl;
	cout << "String#3 " << string3 << endl;
	cout << "String#4 " << string4 << endl;
	cout << "String#5 " << string5 << endl;
	cout << "String#6 " << string6 << endl;
	cout << "String#7 " << string7 << endl;

	cout << endl;
	cout << "Part B" << endl;
	cout << "testing String1 is equal to string 2 " << endl;
	if (string1.compare(string2) == -1)
		cout << "1st and 2nd strings are different ." << endl;
	else
		cout << "1st string is equal to 2nd String." << endl;

	cout << endl << "Part C" << endl;
	cout << "String1 = String3: ";
	string3 = string1;
	cout << "String3 is now = " << string3 << endl;

	cout << endl;
	cout << endl << "Part D" << endl;
	cout << "String4 = String1 + String2: ";
	string10 = string1 + string2;
	cout << endl << "String4: " << string10;

	cout << endl;
	cout << endl << "part E" << endl;
	cout << "Length of String#3: " << string3.length() << endl; 

	cout << endl << "part F" << endl;
	cout << " Upper Case of string 2 ";
	for (int i = 0; i < string2.length(); i++) { 
		putchar(toupper(string2[i]));
	}
	
	cout << endl;

	////  using C++ library functions tolower and toupper
	cout << "Lower Case of string 2 ";
	for (int i = 0; i < string2.length(); i++) 
	{ 
		putchar(tolower(string2[i]));
	}
	
	cout << endl << endl;
	cout << " Adding three strings";
	string11 = string4 + ' ' + string5 + ' ' + string6;

	cout << "\n" << "String#11 =  ";
	cout << string11;


	return 0;
}
*/