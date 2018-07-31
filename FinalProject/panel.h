#pragma once
#include "../Common/Control.h"
#include "../Common/Graphics.h"
#include "../Common/EventEngine.h"
#include "TextBox.h"




class panel: public Control
{

private:

	int width,height ;
	

	

public:
	panel(int x, int y, int width, int height);
	~panel();
	// getters and setters

	/*void setHeight(int height) { this->height = height; }
	void setWidth(int width) { this->width = width; }
	int getWidth() {return width;}
	int getHeight() {return height;}*/

	//Control class methods

	void draw(int,int,int,int,Border border);

	
	


	





};

