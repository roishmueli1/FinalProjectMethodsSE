#include "Control.h"
#include <iostream>

using namespace std;

void Control::draw(Graphics& g, int x, int y,int width,int height, Border border)
{

	if (border == Border::doubleline)
	{
		g.moveTo(x, y);
		cout << '\xC9';
		for (int i = 1; i < width; i++)
		{
			cout << '\xCD';
		}
		
		
		g.moveTo(x + width, y);
		cout << '\xBB';
		for (int i = 1; i <height; i++)
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
		for (int i = 1; i < width; i++)
		{
			g.moveTo(x + i, y + height);
			cout << '\xCD';
		}

	}
	else if (border == Border::oneLine)
	{	
		g.moveTo(x, y);
		cout << '\xDA';
		for (int i = 1; i < width; i++)
		{
			cout << '\xC4';
		}
		
		
		g.moveTo(x + width, y);
		cout << '\xBF';
		for (int i = 1; i < height; i++)
		{
			g.moveTo(x, y + i);
			cout << '\xB3';
			g.moveTo(x + width, y + i);
			cout << '\xB3';
		}
		g.moveTo(x, y + height);
		cout << '\xC0';
		g.moveTo(x + width, y + height);
		cout << '\xD9';
		for (int i = 1; i < width; i++)
		{
			g.moveTo(x + i, y + height);
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
string Control::writeInText(string _s)
{
	cin >> _s;
	this->text = _s;
	return _s;
	
}
void Control::mousePressed(int x, int y, bool button)
{
	string s,S;
	Graphics Gr;
	
	if ( x >= 11 && x < 90 &&  y > 28 && y <35 && button == FROM_LEFT_1ST_BUTTON_PRESSED || button == RIGHTMOST_BUTTON_PRESSED)
	{
		Gr.moveTo(11, 29);
		cin >> s;
		
	}
	if (x == 63 && y == 13 && button == FROM_LEFT_1ST_BUTTON_PRESSED || button == RIGHTMOST_BUTTON_PRESSED)
	{
		Gr.moveTo(63, 13);
		cout << "\xCF";
		Gr.write(11, 11, "Sport");
		
		S = "Sport";
		Gr.setStringG(S);
	}
	if (x == 77 && y == 13 && button == FROM_LEFT_1ST_BUTTON_PRESSED || button == RIGHTMOST_BUTTON_PRESSED)
	{
		Gr.moveTo(77, 13);
		cout << "\xCF";
		Gr.write(11, 12, "Movies");

	}if (x == 63 && y == 17 && button == FROM_LEFT_1ST_BUTTON_PRESSED || button == RIGHTMOST_BUTTON_PRESSED)
	{
		Gr.moveTo(63, 17);
		cout << "\xCF";
		Gr.write(11, 13, "VideoGames");
	}
	if (x == 77 && y == 17 && button == FROM_LEFT_1ST_BUTTON_PRESSED || button == RIGHTMOST_BUTTON_PRESSED)
	{
		Gr.moveTo(77, 17);
		cout << "\xCF";
		Gr.write(11, 14, "MotorCycle");
	}
	if (x >45 && x < 58 && y > 35 && y <37  && button == FROM_LEFT_1ST_BUTTON_PRESSED || button == RIGHTMOST_BUTTON_PRESSED)
	{
		Gr.moveTo(11, 11);
		setString(s);

	}


}



Control::~Control()
{
}
