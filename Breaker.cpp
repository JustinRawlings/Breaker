// Justin Rawlings
//CSC215
//10/26/18

#include "pch.h"
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	enum fields { WORD, HINT, NUM_FIELDS };
	const int NUM_WORDS = 10;
	const string WORDS[NUM_WORDS][NUM_FIELDS] =
	{
		{"Man", "A male human."},
	{"Pears", "A bizzarly shaped fruit."},
	{"Apple", "Keeps the doctor away."},
	{"Door", "Enterance to a house."},
	{"Window", "Viewing glass to the world."},
	{"Hair", "Strands on top of one's head."},
	{"Banana", "Yellow fruit."},
	{"Woman", "Child bearing human."},
	{"Mirror", "Reflection."},
	{"Rock", "Gets stuck in one's show."},
	};

	srand(static_cast<unsigned int>(time(0)));
	int choice = (rand() % NUM_WORDS);
	string theWord = WORDS[choice][WORD];
	string theHint = WORDS[choice][HINT];

	string jumble = theWord;
	int length = jumble.size();
	for (int i = 0; i < length; ++i);
	{
		int index1 = (rand() % length);
		int index2 = (rand() % length);
		char temp = jumble[index1];
		jumble[index1] = jumble[index2];
		jumble[index2] = temp;

	}
	cout << "Welcome to the CIA code breaking training simulation.";
	cout << "You will be given scrambled code words that you must translate.";
	cout << "For a hint, type the word 'hint.'";
	cout << "To quit, type 'quit.'";

	string guess;
	cout << "\n\nYour guess: ";
	cin >> guess;

	while ((guess != theWord) && (guess != "quit"))
	{
		if (guess == "hint")
		{
			cout << theHint;
		}
		else
		{
			cout << "That is not correct, try again.";
		}
		cout << "\n\nYour guess: ";
		cin >> guess;

		if (guess == theWord)
		{
			cout << "Correct";
		}
		cout << "\nThanks for using the CIA code breaker training program.";
	}
		return 0;


	}