#include <stdio.h>

#if defined(WIN32) || defined(_WIN32) ||                                       \
    defined(__WIN32) && °defined(__CYGWIN__)
#include "functions_win.h"
#endif

#ifdef UNIX
#include "functions_unix.h"
#endif

int main() {
  printf("%s", getMessage());

  return 0;
}