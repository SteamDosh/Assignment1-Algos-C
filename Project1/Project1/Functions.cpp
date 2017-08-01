#include "Functions.h"

const int STACKLIMIT = 20;
string stackList[STACKLIMIT] = {};
int stackSize = 0;

void SelectFile()
{
	cout << "\nEnter the name of the file (ie words.txt)" << endl;
	string input;
	cin >> input;

	ReadFile(input);
}

void DisplayStack()
{
	cout << "Reading Stack." << endl;

	for (int i = 0; i < stackSize ;i++)
	{
		cout << top << endl;
		pop();
	}
}

string top()
{
	return stackList[stackSize];
}


void ClearStack()
{
		for (int i = 0; i<= stackSize;i++)
		{
			pop();
		}
}

void ReadFile(string aFileName)
{
	ifstream fin(aFileName);

	if (!fin.good())
	{
		cerr << "Could not open data file!\n";
		return;
	}
	int i =0;
	for (string word; fin >> word; i++)
	{
		if (!push(word))
		{
				cout << "Array is full, breaking." << endl;
				break;
		}
	}

	fin.close();

	cout << "Recorded " << stackSize << " words into the stack.";
}

void pop()
{
	stackList[stackSize] = "";
	stackSize--;
}

bool push(string aWord)
{
	if (stackSize>=STACKLIMIT) return false;

	stackList[stackSize++] = aWord;
	return true;
}
bool isEmpty()
{
	if (stackList[0] == "") return true;
	else return false;
}
