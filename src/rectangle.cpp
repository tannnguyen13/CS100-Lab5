#include "../header/rectangle.hpp"

Rectangle::Rectangle() {
	width = 0;
	height = 0;
}

Rectangle::Rectangle(int w, int h) {
	width = w;
	height = h;
}

void Rectangle::set_width (int w) {
	width = w;
}

void Rectangle:: set_height(int h){
	height = h;
}	

int Rectangle::area() {
	return (height * width);
}

int Rectangle::perimeter() {
	return ((2*height) + (2*width));
}
