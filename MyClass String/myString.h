#include <iostream>
using namespace std;
#define max_length 150 

// part a
class myString {

private:
	char str[max_length];
	int str_size;

public:
	myString();   //  empty string 
	myString(char s[max_length], int size); 
	void print();
	void resize(int r);
	void clear();  //  clear previous data for use when copying to string of two diffrent sizes  

	// part b
	bool Compare(myString s2);  

	// part c
	void Copy(myString s2);

	// part  d
	myString Concatenate(myString s2);

	// part f
	int Length();

	// part g 
	void toUpperCase();
	void toLowerCase();

	// Overloading operators 

	void operator=(const myString& s2) {
		Copy(s2);
	}
	myString operator+(const myString& s2) {
		return Concatenate(s2);
	}

};
