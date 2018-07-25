#include "Control.h"
#include <iostream>

using namespace std;

void Control::draw(Graphics& g, int x, int y,int width,int height, Border border)
{

	if (border == Border::doubleline)
	{
		g.moveTo(x, y);
		for (int i = 0; i < width; i++)
		{
			cout << '\xCD';
		}
		g.moveTo(x, y);
		cout << '\xC9';
		g.moveTo(x + width, y);
		cout << '\xBB';
		for (int i = 0; i <height; i++)
		{
			g.moveTo(x, y + i);
			cout << '\xBA';
			g.moveTo(x + width, y + i);
			cout << '\xBA';
		}
		g.moveTo(x, y+height);
		cout << '\xC8';
		g.moveTo(x + width, y+height);
		cout << '\xBC';
		for (int i = 0; i < width; i++)
		{
			g.moveTo(x + i, y + height);
			cout << '\xCD';
		}

	}
	else if (border == Border::oneLine)
	{
		g.moveTo(x, y);
		for (int i = 0; i < 12; i++)
		{
			cout << '\xC4';
		}
		g.moveTo(x, y);
		cout << '\xDA';
		g.moveTo(x + 12, y);
		cout << '\xBF';
		for (int i = 0; i < 7; i++)
		{
			g.moveTo(x, y + i);
			cout << '\xB3';
			g.moveTo(x + 12, y + i);
			cout << '\xB3';
		}
		g.moveTo(x, y + 7);
		cout << '\xC0';
		g.moveTo(x + 12, y + 7);
		cout << '\xD9';
		for (int i = 0; i < 12; i++)
		{
			g.moveTo(x + i, y + 7);
			cout << '\xC4';
		}

	}
	else if (border == Border::noLine)
	{
		//**************************************  nothing to show.
		/*g.moveTo(x, y);
		for (int i = 0; i < 12; i++)
		{
			cout << "  " ;
		}
		g.moveTo(x, y);
		cout << " ";
		g.moveTo(x + 12, y);
		cout << " ";
		for (int i = 0; i < 7; i++)
		{
			g.moveTo(x, y + i);
			cout << " ";
			g.moveTo(x + 12, y + i);
			cout << " ";
		}
		g.moveTo(x, y + 7);
		cout << " " ;
		g.moveTo(x + 12, y + 7);
		cout << " ";
		for (int i = 0; i < 12; i++)
		{
			g.moveTo(x + i, y + 7);
			cout << " ";
		}*/

	}
}

Control::Control()
{
	//Graphics *g;
	//g->clearScreen();

}



Control::~Control()
{
}
