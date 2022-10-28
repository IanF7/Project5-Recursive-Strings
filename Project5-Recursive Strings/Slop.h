#ifndef SLOP_H
#define SLOP_H

#include <iostream>

using namespace std;

class Slop
{
	private:
		string str;
	public:
		Slop();
		Slop(string str);
		bool isSlip(string str);
		bool isSlap(string str);
		bool isSlop(string str);
};


#endif SLOP_H
