#include <stdio.h>

int main()
{
  float f = 0.6;
  if (f < 0.6)
    printf("Unreachable code right? How can f=%f < 0.6 be true??\n", f);
  f = 0.7;
  if (f < 0.7)
    printf("Unreachable code right? How can f=%f < 0.7 be true??\n", f);
  f = 0.8;
  if (f < 0.8)
    printf("Unreachable code right? How can f=%f < 0.8 be true??\n", f);
  return 0;
}
