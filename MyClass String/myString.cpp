#include "myString.h"

	myString::myString()
	{
	      clear();
		  str_size = 0;
	}
	myString::myString(char s[max_length], int size) {
		clear();
		str_size = size;
		for (int i = 0; i < max_length; i++)
		{
			str[i] = s[i];
		}
	}
// print strings 
	void myString::print() {

		for (int i = 0; i < str_size; i++) {
			cout << str[i];
		}
		cout << endl;
	}
// clearing 
	void myString::clear() {
		for (int i = 0; i < max_length; i++) {
			str[i] = ' ';
		}
	}

	// retunr  a bool if are the same or not 
	 bool myString::Compare(myString s2) {
		 if (str_size != s2.str_size)

			 return false;
		else {
			for (int i = 0; i < str_size; i++) {
				if (str[i] != s2.str[i])
					return false;
			}
		}
			return true;
	}

	 // copy a string to another 
	void myString::Copy(myString s2) {
		clear(); 
		for (int i = 0; i < s2.str_size; i++)
			str[i] = s2.str[i];
	}

	// put string toghther to even form setances 
	myString myString::Concatenate(myString s2) {
		myString s3;
		s3.str_size = str_size + s2.str_size + 1;

		for (int i = 0; i < str_size; i++) {
			s3.str[i] = str[i];
		}
		s3.str[str_size] = ' ';

		for (int j = 0; j < s2.str_size; j++) {
			s3.str[j+str_size +1]= s2.str[j];
		}

		return s3;
	}

	// resize the string 
	void myString::resize(int r)
	{
		str_size = r;
	}

// get the lenght of the string 
	int myString::Length() {
		return str_size;
	}

	// getting lower case 
	void myString::toLowerCase() {
		for (int i = 0; i < str_size; i++) {
			if (isupper(str[i]))
				str[i] = str[i] + 32;
		}
	}

	// getting string upercase 
	void myString::toUpperCase() {
		for (int i = 0; i < str_size; i++) {
			if (islower(str[i]))
				str[i] = str[i] - 32;
		}
	}

	
