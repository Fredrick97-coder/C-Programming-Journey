#include <stdio.h>

int main()
{
 // input expected from users
 double volume, height, width, depth;

 printf("Enter your height: ");
 scanf("%lf", &height);

 printf("Enter your width: ");
 scanf("%lf", &width);

 printf("Enter your depth: ");
 scanf("%lf", &depth);

 volume = height * width * depth,

 printf("This is is the %lf volume \n", volume);

 return 0;
}
