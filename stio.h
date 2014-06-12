/*
  libstio -- Library of Single Terminal Input/Output

  This is the library (or even a specification for a
  very simple I/O of the single terminal window

  This library may be a building block of the more
  sophisticated libraries and interfaces

  Author: Ivan Sukin <muspellsson@undeadbsd.org>
  
  This is free and unencumbered software released
  into the public domain

  For more information, please refer to <http://unlicense.org/>
 */

#ifndef _STIO_H_
#define _STIO_H_
#if defined(__cplusplus)
extern "C" {
#endif

#include <curses.h>

  enum{
    ColorBlack,
    ColorRed,
    ColorGreen,
    ColorYellow,
    ColorBlue,
    ColorMagenta,
    ColorCyan,
    ColorWhite
  };

  void tio(void);
  int  tiow(void);
  int  tioh(void);
  int  tioget(void);
  void tiopen(int, int);
  int  tiofg(void);
  int  tiobg(void);
  void tioput(int, int, int);
  void tioflush(void);
  void endtio(void);
  void tiocurson(void);
  void tiocursoff(void);

#if defined(__cplusplus)
}
#endif
#endif
