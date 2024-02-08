#include "function.h"


void printArray(int ar[], int sizeA) {
	for (int i = 0; i < sizeA; i++) { //print array
		cout << ar[i] << " ";
	}
}

//checks if integer exists in the array and return index if present
int checkInt(int num, int ar[], int sizeA, bool &inExist) {

	for (int i = 0; i < sizeA; i++) {
		if (num == ar[i]) {
			inExist = true;
			return i;
		}
	}
}

//Replace chosen index with chosen number
void modifyInt(int ar[], int sizeA) {
	string index;
	int numOld;
	int numNew;
	bool isGood = false;

	while (!isGood) {
		try {
			cout << "\n\nIndex you want to modify: ";
			cin >> index;
			if (stoi(index)<0 || stoi(index)>sizeA)
				throw ("Error");
			numOld = ar[stoi(index)];
			isGood = true;
		}
		catch (...) {
			cout << "Error: index entered invalid, try again.";
		}
	}

	cout << "Number you want replaced: ";
	cin >> numNew;
	ar[stoi(index)] = numNew;
	cout << "You replaced " << numOld << " with " << numNew << " at index " << index << endl << endl;
}


//return integer to add to the end of array
int addToEnd(int ar[], int sizeA) {
	string num;
	bool isGood = false;
	while (!isGood) {
		try {
			cout << "\n\nEnter number to add to the end of array: ";
			cin >> num;
			if (!stoi(num))
				throw("stoi error");
			return stoi(num);
			isGood = true;
		}
		catch (...) {
			cout << "Error: input entered is not a number, try again.";
		}
	}
}

//replaces chosen index with zero
void replaceZero(int ar[], int sizeA) {
	int index;
	int numOld;
	cout << "\n\nIndex you want to replace with 0: ";
	cin >> index;
	numOld = ar[index];
	ar[index] = 0;
	cout << "You replaced " << numOld << " with 0 at index " << index << endl << endl;;
}