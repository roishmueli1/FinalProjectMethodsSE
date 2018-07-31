#pragma once
#include "../common/Control.h"
#include "../common/Graphics.h"
#include "../common/EventEngine.h"
#include <vector>
#include <string>

class Label: public Control
{
private:
	int _left, _bottom, _width, _height;

public:
	Label(int left, int bottom, int width, int height);
	~Label();

	//void draw(Graphics& g, int x, int y);
};

