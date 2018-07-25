#include "Label.h"
#include <iostream>


using namespace std;

void Label::draw(Graphics& g, int x, int y)
{
	g.moveTo(x, y);
	//draw frame to label.
	for (int i = 0; i < 10; i++)
	{
		cout << "=";
	}
}

Label::Label(string s)
{
	cout << s << endl;
}


Label::~Label()
{
}
