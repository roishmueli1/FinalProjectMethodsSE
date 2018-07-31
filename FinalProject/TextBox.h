#pragma once
#include <string>
#include "../Common/Control.h"
#include "../Common/Graphics.h"

class TextBox : public Control
{

private:
	int width, height;
	int left, bottom;

public:

	TextBox(int left, int bottom, int width, int height) ;
	


	//void draw(int left, int bottom,  int width, int height);

	
	~TextBox();
};

