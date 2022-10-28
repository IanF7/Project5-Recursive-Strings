#include "Slop.h"
#include <iostream>

using namespace std;

//default constructor
Slop::Slop()
{
	this->str = str;
}

//parameterized constructor
Slop::Slop(string str)
{
	str = "";
}

//isSlip function that takes in a string and returns a bool (O(nlog(n))
bool Slop::isSlip(string str)
{
	//creates a bool slip and sets it equal to false
	bool slip = false;
	//checks if the first letter is a D or E
	if (str[0] == 'D' || str[0] == 'E')
	{
		//checks if second letter is F
		if (str[1] == 'F')
		{
			//runs while i is less than the length of the string minus 2
			for (int i = 2; i <= str.length() - 2; i++)
			{
				//checks if value is f
				if (str[i] == 'F')
				{
					//continue
				}
				//checks if value is a slip
				else if(isSlip(str.substr(i)))
				{
					//continue
				}
				//returns slip as false otherwise
				else
				{
					return slip;
				}
			}
			//checks if last character is a G 
			if (str[str.length() - 1] == 'G')
			{
				//sets slip to true and returns slip
				slip = true;
				return slip;
			}
			else
			{
				//returns slip as false
				return slip;
			}
		}
		else
		{
			//returns slip as false
			return slip;
		}
	}
	//returns slip as false
	return slip;
}

//isSlap function that takes in a string and returns a bool (O(nlog(n))
bool Slop::isSlap(string str)
{
	//creates bool slap and sets it equal to false
	bool slap = false;
	//checks if first character is A
	if (str[0] == 'A')
	{
		//checks if string is 2 characters long
		if (str.length() == 2)
		{
			//checks if the second character is H
			if (str[1] == 'H')
			{
				//sets slap to true and returns slap
				slap = true;
				return slap;
			}
		}
		else
		{
			//checks if second character is B
			if (str[1] == 'B')
			{
				//checks if middle characters are a slap
				if (isSlap(str.substr(2, str.length() - 3)))
				{
					//checks if last character is a C
					if (str[str.length() - 1] == 'C')
					{
						//sets slap to true and returns slap
						slap = true;
						return slap;
					}
				}
			}
			//checks if the middle characters are a slip
			else if(isSlip(str.substr(1, str.length() - 2)))
			{
				//checks if last character is a C
				if (str[str.length() - 1] == 'C')
				{
					//sets slap to true and returns slap
					slap = true;
					return slap;
				}
			}
		}
	}
	//returns slap
	return slap;
}

//isSlop function that takes in a string and returns a bool (O(nlog(n))
bool Slop::isSlop(string str)
{
	//creates a bool slop and sets it equal to false
	bool slop = false;
	//checks if the first two characters are a slap
	if (isSlap(str.substr(0, 2)))
	{
		//checks if remaining characters are a slip
		if (isSlip(str.substr(2, str.length() - 2)))
		{
			//sets slop to true, prints out yes, and returns slop
			slop = true;
			cout << "Yes" << endl;
			return slop;
		}
	}
	else
	{
		//creates int lastC to keep track of last C in string
		int lastC = 0;
		//runs while i is less than the length of the string
		for (int i = 0; i < str.length(); i++)
		{
			//checks if value at index i is C
			if (str[i] == 'C')
			{
				//sets lastC equal to value of i
				lastC = i;
			}
		}
		//checks if characters from start of string to lastC is a slap
		if (isSlap(str.substr(0, lastC + 1)))
		{
			//checks if remaining characters are a slip
			if (isSlip(str.substr(lastC + 1, str.length() - 1)))
			{
				//sets slop to true, prints out yes, and returns slop
				slop = true;
				cout << "Yes" << endl;
				return slop;
			}
		}
	}
	//prints out no and returns slop as false
	cout << "No" << endl;
	return slop;
}


