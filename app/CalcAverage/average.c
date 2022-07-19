#include <stdio.h>

float calculate_average(float *numbers, int count)
{
 float sum = 0;
 for (int i = 0; i < count; i++)
 {
  sum += numbers[i];
  printf("%f\n", numbers[i]);
 }
 return sum / count;
}

int main()
{
 float numbers[] = {1.0, 2.0, 3.0, 4.0, 5.0};
 float average = calculate_average(numbers, 5);
 printf("The average is %f\n", average);
 return 0;
}