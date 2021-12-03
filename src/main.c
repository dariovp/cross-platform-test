#include <stdio.h>

#ifdef WIN
#include "functions_win.h"
#endif

#ifdef UNIX
#include "functions_unix.h"
#endif

int main() {
  printf("%s", getMessage());

  return 0;
}