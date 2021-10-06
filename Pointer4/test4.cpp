#include <iostream>
#include <time.h>

using namespace std;

int search(char* pchs, int& size, char key)
{
	// initialise count variable
	int count = 0;

	// allocate char array using provided size
	//char myArray[] = { 0 };
	char* myArray = new char[size];
	srand(time(NULL));
	// for each element in array, assign a random char using ascii 97 + rand() % 26.
	// use size to loop through each item in the character array
	for (int i = 0; i < size; i++) {
		myArray[i] = 97 + rand() % 26;
		//cout << myArray[i] << endl;
		// using pointer arithmetic, compare the character currently being pointed to with the key char
		// if value at pchs matches value of key then increase count by 1
		if ( myArray[i] == key) {
			count++;
		}
	}

	delete[] myArray;
	return count;
}

int main()
{
	int arraySize;
	int count;
	char c;
	
	// Retrieve array size
	cout << "Enter the size of the array: ";
	cin >> arraySize;
	cout << "The array will be " << arraySize << " items in length." << endl;

	//Retrieve the key
	cout << "Enter the key: ";
	cin >> c;
	cout << "The key is: " << c << endl;

	count = search(NULL, arraySize, c);
	cout << "Number of times key appears in array is: " << count << endl;

	return 0;
}