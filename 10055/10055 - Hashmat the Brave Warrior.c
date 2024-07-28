#include <stdio.h>

int main() {
  long a, b, res;
  while (scanf("%ld %ld", &a,&b) == 2) {
    if ( a <= b ) {
      res = b-a;
    } else {
      res = a-b;
    }
    printf("%ld\n",res);
  }
  return 0;
}
