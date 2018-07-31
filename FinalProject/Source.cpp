#include "../Common/Graphics.h"
#include "Label.h"
#include "TextBox.h"
#include "panel.h"
#include "../Common/EventEngine.h"
#include "../Common/Control.h"
#include <iostream>

using namespace std;


int main(int argc, char** argv)
{
	HANDLE handleIn;
	HANDLE handleOut;
	COORD KeyWhere;
	COORD MouseWhere;
	COORD EndWhere;
	INPUT_RECORD recordIn;
	DWORD NumRead;
	Graphics Gr;
	string s;
	cout << "[####################################### Walcome to the Costumer From ################################] " << endl;
	panel L(1, 1, 100, 40);
	TextBox t(10, 10, 10, 5);
	Label l(20, 20, 17, 7);

	handleIn = GetStdHandle(STD_INPUT_HANDLE);
	handleOut = GetStdHandle(STD_OUTPUT_HANDLE);

	while (true)
	{
		ReadConsoleInput(handleIn, &recordIn, 1, &NumRead);
		switch (recordIn.EventType)
		{
		case KEY_EVENT:
			Gr.moveTo(11, 11);
			cin >> s;
			break;
			switch (recordIn.EventType)
			{
				case KEY_EVENT:
				Gr.moveTo(21, 21);
				break;
			}
			
		case MOUSE_EVENT:
			Gr.moveTo(21, 21);
			break;
		}
	}
	cin >> s;
	

	//Label l("Hello World");
	/*Control& l2 = l;
	EventEngine e;
	e.run(l);*/

}