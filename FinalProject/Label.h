#pragma once
#include "../common/Control.h"
#include "../common/Graphics.h"
#include "../common/EventEngine.h"
#include <vector>
#include <string>

class Label // public Control
{
private:
	int x=0, y=0;
	string s;
public:
	Label(string s);
	~Label();

	void draw(Graphics& g, int x, int y);
};

