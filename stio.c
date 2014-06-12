/*
  Reference implementation
  This implementation of libstio uses curses library
 */
#include "stio.h"
#include <curses.h>

struct Pen{
  int fg;
  int bg;
};

struct Pen _pen;

void
tio(void)
{
  initscr();
  raw();
  keypad(stdscr, TRUE);
  noecho();
  curs_set(0);
}

int
tiow(void)
{
  return getmaxx(stdscr);
}

int
tioh(void)
{
  return getmaxy(stdscr);
}

int
tioget(void)
{
  return getch();
}

void
tiopen(int fg, int bg)
{
  _pen.fg = fg;
  _pen.bg = bg;
}

int
tiofg(void)
{
  return _pen.fg;
}

int
tiobg(void)
{
  return _pen.bg;
}

void
tioput(int x, int y, int c)
{
  mvaddch(y, x, (chtype)c);
}

void
tioflush(void)
{
  refresh();
}

void
endtio(void)
{
  endwin();
}

void
tiocurson(void)
{
  curs_set(1);
}

void
tiocursoff(void)
{
  curs_set(0);
}
