#pragma once
#include <string>
#include "../Common/Control.h"

class TextBox : public Control
{
public:
	TextBox(int width, int height);


	virtual void draw(Graphics& g, int x, int y, size_t z) {};
	//Setters
	//void setText(string);

	//getters
	//string getText();
	~TextBox();
};

