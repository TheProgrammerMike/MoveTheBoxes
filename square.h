// square.h
#include <FL/Fl_Box.H>

const int BOX_SIZE = 32;

class Square : public Fl_Box
{
	int dx;
	int dy;
public:
	Square(int x, int y);
	int handle(int event);
};
