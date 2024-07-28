# include <stdio.h>

int main() {
  int a; long b,c;
  scanf("%d", &a);
  while ( a > 0 ) {
    scanf("%ld %ld", &b, &c);
    if (b == c) {
      printf("=\n");
    } else if (b < c) {
      printf("<\n");
    } else {
      printf(">\n");
    }
    a--;
  }
  return 0;
}
