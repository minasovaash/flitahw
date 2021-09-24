#include <stdio.h>
#include <limits.h>

  int main () {
      char c;
      int i = 0;
      while (scanf ("%d", &c )) {
          if ( (c > '1') || (c<'0') ) break;
          i+= c & 1;
          i <<= 1;
      }
    printf ("%d\n", i);
    return 0;
  }
  