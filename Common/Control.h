#pragma once
#include "Graphics.h"
#include <vector>

using namespace std;

enum class Border { doubleline, oneLine, noLine };

class Control
{

protected:
	short left;
	short top;
	string text;
	
public:
	Control();


	static Control* getFocus() { return NULL; };
	static void setFocus(Control& control) {};
	virtual void draw(Graphics& g, int x, int y, int width, int height, Border border);
	virtual void mousePressed(int x, int y, bool isLeft);
	virtual void keyDown(int keyCode, char charecter) {};
	virtual short getLeft() { return 0; };
	virtual short getTop() { return 0; };
	virtual void getAllControls(vector<Control*>* controls) {};
	virtual bool canGetFocus() { return FALSE; };
	virtual string getString() { return text; }
	virtual void setString(string _text) { this->text = _text; }
	virtual string writeInText(string _s);
	
	//virtual bool myPureFunction() = 0;
	~Control();
};

