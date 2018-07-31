#include "Button.h"




Button::Button(int left, int bottom, int width, int height)
{

	Graphics g;
	g.setBackground(Color::Blue);
	g.setForeground(Color::Red);
	g.write(left+1, bottom + 1, "Click Here->");
	Control::draw(g, left, bottom, width, height, Border::oneLine);
	
}

Button::~Button()
{

}