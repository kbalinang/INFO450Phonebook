// INFO450Phonebook.cpp : Defines the entry point for the console application.
//

//Project by Kristoffer Louie Balinang 

#include "stdafx.h"
#include <iostream>
#include <stdio.h>
#include "windows.h"
using namespace std;

void enter(char mylist[10][2][50]);
void display(char mylist[10][2][50]);

int main()
{
	char mylist[10][2][50];
	bool answer = true;
	char response;
	do
	{

		system("cls");
		cout << "Project By Kristoffer Balinang" << endl;
		cout << " " << endl;
		cout << "-----------------------" << endl;
		cout << "What do you want to do?" << endl;
		cout << "-----------------------" << endl;
		cout << "[A]dd new entry -- enter A" << endl;
		cout << "[D]isplay -- enter D" << endl;
		cout << "[Q]uit -- enter Q" << endl;
		cin >> response;
		cout << " " << endl;

		if ((response == 'A') || (response == 'a'))
		{
			answer = true;
			enter(mylist);
		}

		else if ((response == 'D') || (response == 'd'))
		{
			system("cls");
			answer = true;
			display(mylist);
		}

		else if ((response == 'Q') || (response == 'q'))
		{
			system("cls");
			answer = false;
			cout << "Good Bye!" << endl;
		}
		else
		{
			system("cls");
			cout << "Invalid response" << endl;
			system("pause");
			answer = true;
		}

	} while (answer);

	return 0;
}


void enter(char mylist[10][2][50])
{
	static int i = 1;
	int y;
	if (i < 11)
	{
		cout << "Entry: " << i << endl;
		cout << "Enter name: ";
		cin.clear();
		cin.ignore();
		gets_s(mylist[i][0]);
		if (y = 1, y < 10, y++)
		{
			if (((strcmp(mylist[i][0], mylist[i - y][0])) == 0) || ((strcmp(mylist[i][0], mylist[i - 1][0])) == 0))
			{
				cout << mylist[i][0] << " (ALERT) Already exists! " << endl;
				cout << " " << endl;
				cout << "Enter name: ";
				gets_s(mylist[i][0]);
			}
		}
		cout << "Enter number: ";
		gets_s(mylist[i][1]);
		cout << " " << endl;
		cout << "Contact added!" << endl;
		i++;
		system("pause");
	}
	else
	{
		cout << "Phonebook is full!" << endl;
		system("pause");
	}
}

void display(char mylist[10][2][50])
{
	int i;

	for (i = 1; i < 11; i++)
	{
		cout << "Entry: " << i << " Name: " << mylist[i][0] << " Number: " << mylist[i][1] << endl;
	}
	system("pause");
}