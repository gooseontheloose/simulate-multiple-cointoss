#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

//function prototypes
int getTosses();
void coinToss();

int main()
{
	int numTosses; //To hold number of tosses

	//getting system time s we can use random number generator
	unsigned seed = time(0);
	srand(seed);

	//get number of toses to make
	numTosses = getTosses();

	//get results of coin toss and output to screen
	for (int count = 1; count <= numTosses; count++)
	{
		cout << count << ":\t";
		coinToss();
	}

	system("pause");
	return 0;
}

int getTosses()
{
	int number = 0; 
	do
	{
		cout << "How many tosses will I make? ";
		cin >> number;
		if (number <= 0)
		{
			cout << "Error! The number of coin tosses must be positive.\n";
		}
	} 
	while (number <= 0);
	return number;


}

//counToss function - simulates a coin toss
void coinToss()
{
	//generate a number in range of 1 through 2
	int number = 1 + rand() % 2;
	string coinSide = "";

	//Display heads or tails
	if (number == 1)
	{
		coinSide = "Heads";
	}
	else if (number == 2)
	{
		coinSide = "Tails";
	}
	else
	{
		coinSide = "Error!";
	}

	cout << coinSide << endl;

	return;
}