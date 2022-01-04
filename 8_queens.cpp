#include <stdio.h>

#define QUEENS       8 /*�ӦZ?�q*/
#define IS_OUTPUT    1 /*(IS_OUTPUT=0 or 1)�AOutput�Τ_??�O�_?�X���^��,?1?�X�A?0��?�X*/

int A[QUEENS + 1], B[QUEENS * 3 + 1], C[QUEENS * 3 + 1], k[QUEENS + 1][QUEENS + 1];
int inc, *a = A, *b = B + QUEENS, *c = C;
void lay(int i) {
  int j = 0, t, u;

  while (++j <= QUEENS)
    if (a[j] + b[j - i] + c[j + i] == 0) {
      k[i][j] = a[j] = b[j - i] = c[j + i] = 1;
      if (i < QUEENS) lay(i + 1);
      else {
        ++inc;
        if (IS_OUTPUT) {
          for (printf("(%d)\n", inc), u = QUEENS + 1; --u; printf("\n"))
            for (t = QUEENS + 1; --t; ) k[t][u] ? printf("Q ") : printf("+ ");
          printf("\n\n\n");
        }
      }
      a[j] = b[j - i] = c[j + i] = k[i][j] = 0;
    }
}

int main(void) {
  lay(1);
  printf("%d�ӦZ�@?%d?��\n", QUEENS, inc);
  return 0;
}
