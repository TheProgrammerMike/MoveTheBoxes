#include <FL/Fl.h>
#include <FL/Fl_Window.H>
#include <FL/Fl_Box.H>
#include <FL/filename.H>
#include "square.h"
#include "field.h"

int main(int argc, char **argv) {
  Field *window = new Field();
  window->end();
  window->show(argc, argv);
  return Fl::run();
}
