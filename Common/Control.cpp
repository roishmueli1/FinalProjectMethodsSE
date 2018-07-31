#include "Control.h"


Control::Control()
{

}


void Control::setBackground(Color color) {
	this->background = color;
}
void Control::setForeground(Color color) {
	this->foreground = color;
}
Color Control::getBackground() {
	return this->foreground;
}
Color Control::getForeground() {
	return this->background;
}



Control::~Control()
{
}
