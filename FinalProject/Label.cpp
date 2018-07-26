#include "Label.h"
#include "../Common/Graphics.h"
#include "../Common/Control.h"
#include <iostream>


using namespace std;

Label::Label(int left, int bottom, int width, int height)
{

	Graphics g;
	g.setBackground(Color::Black);
	g.setForeground(Color::Red);
	g.write(left, bottom - 1,"Label:");
	Control::draw(g, left, bottom, width, height, Border::oneLine);

}



Label::~Label()
{
}
