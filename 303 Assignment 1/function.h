#pragma once
#include <string>
#include <fstream>
#include <iostream>
using namespace std;

void printArray (int ar[], int sizeAr);

int checkInt(int num, int ar[], int sizeA, bool & inExist);

void modifyInt(int ar[], int sizeA);

int addToEnd(int ar[], int sizeA);

void replaceZero(int ar[], int sizeA);