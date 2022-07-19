#include <stdio.h>
#include <ctype.h>

int main()
{

 // accept grade from user
 char grade;

 printf("Enter your grade: ");
 scanf("%c", &grade);

 grade = toupper(grade);

 switch (grade)
 {
 case 'A':
  printf("Excellent\n");
  break;

 case 'B':
  printf("Well done\n");
  break;

 case 'C':
 case 'D':
  printf("You passed\n");
  break;

 case 'F':
  printf("Better try again\n");
  break;

 default:
  printf("Invalid grade\n");
  break;
 }

 printf("Your grade is %c\n", grade);
 return 0;
}