#include <stdio.h>

int main()
{
 // input expected from users
 double volume, height, width, depth;

 printf("Enter your values :");
 scanf("%lf %lf %lf", &height, &width, &depth);

 volume = height * width * depth,

 printf("This is is the %lf volume \n", volume);

 return 0;
}
