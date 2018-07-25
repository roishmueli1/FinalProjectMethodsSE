#include "panel.h"
#include "../Common/Graphics.h"

/*panel::panel()
{
	//setHeight(30);
	//setWidth(30);
}*/


panel::panel(int x, int y, int width , int height)
{

	Graphics g; TextBox t(10, 7, 10, 5);
	g.setBackground(Color::Black);
	g.setForeground(Color::White);
	Control::draw(g, x, y, width, height, Border::doubleline);

}

panel::~panel()
{
}
