#include "square.h"
#include <FL/Fl.H>
#include <FL/Fl_Group.H>
#include <iostream>
using namespace std;

Square::Square(int x, int y)
: Fl_Box(FL_UP_BOX, x, y, BOX_SIZE, BOX_SIZE, "X")
{
}

int Square::handle(int event)
{
	switch(event)
	{
	case FL_PUSH:
		cout << "push on " << this << endl;
		dx = Fl::event_x() - x();
		dy = Fl::event_y() - y();
		return 1;
	case FL_DRAG:
		cout << "drag on " << this << endl;
		position(Fl::event_x() - dx,
				 Fl::event_y() - dy);
		parent()->redraw();
		return 1;
	default:
		return 0;
	}
}
