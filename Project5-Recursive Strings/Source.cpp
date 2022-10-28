/*
* Ian Fletcher
* CST-201
* 10/27/2022
* This is my own work with some help from the slides in class
*/
#include <iostream>
#include <fstream>
#include <vector>
#include "Slop.h"

using namespace std;

//main method
int main()
{
	//creates new Slop object mySlop
	Slop mySlop;
	//creates int wordCount to keep track of number of words imported
	int wordCount = 0;
	//creates new vector of strings called words
	vector<string> words;
	//creates a string called wordHolder to hold input
	string wordHolder;
	//opens file
	ifstream input("Text.txt");
	//inputs number from input into wordCount
	input >> wordCount;
	cout << "SLOP OUTPUT:" << endl;
	//runs while i is less than wordCount, stores all words in the vector and then
	//tests if word is a slop
	for (int i = 0; i < wordCount; i++)
	{
		input >> wordHolder;
		cout << wordHolder << ": ";
		words.push_back(wordHolder);
		mySlop.isSlop(words[i]);
	}
	cout << "END OF OUTPUT" << endl;
	return 0;
}