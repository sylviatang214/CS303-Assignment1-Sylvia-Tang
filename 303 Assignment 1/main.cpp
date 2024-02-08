#include "function.h"

int main(){

	ifstream inFile("A1input.txt");

	//check if file is good, else return -1
	if (!inFile.good()) {
		return -1;
	}
	
	//initializing array to read file into
	int ar[200];
	int tempA = 0;
	int sizeA = 0;

	while (inFile.good()) { //read file into array
		inFile >> tempA;
		ar[sizeA] = tempA;
		sizeA++;

	}

	printArray(ar, sizeA);

	int tempInput;
	cout << "\n\nEnter number: ";
	cin >> tempInput;
	bool inExist = false;
	int index = checkInt(tempInput, ar, sizeA, inExist);

	//checks if number exists in array
	if (inExist) {
		cout << "Number " << tempInput << " exists in array at index " << index << "." << endl << endl;
	}
	else {
		cout << "Number " << tempInput << " does not exist in array." << endl << endl;
	}

	printArray(ar, sizeA);

	//modify interger with chosen index
	modifyInt(ar, sizeA);

	printArray(ar, sizeA);

	//add number to end of array
	ar[sizeA] = addToEnd(ar, sizeA);
	sizeA++;

	printArray(ar, sizeA);

	//replace chosen index with zero
	replaceZero(ar, sizeA);

	printArray(ar, sizeA);

	return 0;
}