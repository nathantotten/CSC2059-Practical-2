#include <iostream>

using namespace std;
int main()
{

	/*int i = 27;
	int* pi = &i;

	cout << "Value of i is " << i << endl;
	cout << "Value of pi (i.e. the address of i or the pointer to the address of i) is " << pi << endl;
	cout << "Value pi is pointing to, or from dereferencing pi, is " << *pi << endl;

	*pi = 35; //Change the value of i by dereferencing pi
	cout << "Value of i is " << i << endl;
	*pi = *pi * 2;
	cout << "Value of i is " << i << endl;

	double* pd = NULL;	//Declare a double pointer
						//Always initialise an unused pointer to NULL

	cout << "value of pd is " << pd << endl;
	cout << "Value pd is pointing to is " << *pd << endl;*/

						//Program crashes because you try to dereference NULL
						//NULL is not a valid memory address
						// Comment the baove line to continue the test below

	// Uncomment the following code
	// The code tries to print the value of x, which is 10, via pointer px but is wrong.
	//Correct it!

	
	int* px = NULL;
	int x = 10;
	px = &x;
	cout << *px << endl;
	

	return 0;
}