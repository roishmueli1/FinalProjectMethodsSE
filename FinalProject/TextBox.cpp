#include "TextBox.h"




TextBox::TextBox(int left, int bottom, int width,  int height)
{
	Graphics g; 
	g.setBackground(Color::Black);
	g.setForeground(Color::Red);
	g.write(left, bottom-1, "TextBox:");
	Control::draw(g, left, bottom, width, height, Border::doubleline);
}

TextBox::~TextBox()
{
}
