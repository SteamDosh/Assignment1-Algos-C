#include "Functions.h"

stack<string> stackList;

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

	while (!stackList.empty())
	{
		cout << stackList.top() << endl;
		stackList.pop();
	}
}

void ClearStack()
{
	while (!stackList.empty())
	{
		stackList.pop();
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
	ClearStack();
	int i = 0;
	for (string word; fin >> word; i++)
	{
		stackList.push(word);
	}

	fin.close();

	cout << "Recorded " << i << " words into the stack.";
}
