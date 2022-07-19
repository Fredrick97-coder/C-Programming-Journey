// The #define Preprocessor
#include <stdio.h>

#define LENGTH 5
#define WIDTH 5

const float pi = 3.142;

int main()
{
 int area;

 area = LENGTH * WIDTH;
 printf("the area of the rectangle is %d %f\n", area, pi);

 return 0;
}