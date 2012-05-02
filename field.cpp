// -*- mode: C++; indent-tabs-mode: t; c-basic-offset: 4; tab-width: 4 -*-
#include "field.h"
#include "square.h"

const int NUM_BOXES = 5;
const int WINDOW_WIDTH = BOX_SIZE * NUM_BOXES * 2;
const int WINDOW_HEIGHT = 180;

Field::Field()
  : Fl_Window(WINDOW_WIDTH, WINDOW_HEIGHT)
{
  int x = 20;
  for(int i = 0; i < NUM_BOXES; i++)
    {
      Square* box = new Square(x, 40);
      x += BOX_SIZE * 2;
    }
}
