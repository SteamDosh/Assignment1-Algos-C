#pragma once

#include <array>
#include <cctype>
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

void SelectFile();
void DisplayStack();
void ClearStack();
void ReadFile(string aFileName);

void pop();
bool push(string aString);
string top();
bool isEmpty();