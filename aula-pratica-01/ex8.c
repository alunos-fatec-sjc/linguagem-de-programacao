#include <stdio.h>

int main() {
  int a;
  scanf("%d", &a);

  for (int i = 0; i < 11, i++)
    printf("%d x %d = %d", a, i, a*i);

  return 0;
}
