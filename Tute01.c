/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  float n1, n2, tot, avg;

  printf("Enter marks of subject 1 : ");
  scanf("%f", &n1);

  printf("Enter marks of subject 2 : ");
  scanf("%f", &n2);

  tot = n1+n2;
  avg = tot/2;

  printf("Average is %.2lf", avg);
  
  return 0;
}

