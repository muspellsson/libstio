#include <stio.h>

int
main()
{
  tio();
  tiopen(1, 2);
  tioput(10, 3, 'f');
  tioget();
  /* curson();
     tioget(); */
  endtio();
  return 0;
}
