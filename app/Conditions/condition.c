#include <stdio.h>

int max(int a, int b);

int main()
{
 int a = 5, b = 6;
 int result = max(a, b);
 printf("max(%d, %d) = %d\n", a, b, result);
}

int max(int a, int b)
{
 // this retruns the larger of a and b
 return a > b ? a : b;
}
