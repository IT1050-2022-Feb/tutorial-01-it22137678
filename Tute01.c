/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
   int marks1,marks2;
	float avg,sum;
	
  	printf("Enter the marks of first subject :");
  	scanf("%d",&marks1);
  	
  	printf("Enter the marks of second subject :");
  	scanf("%d",&marks2);
  	
  	sum=marks1+marks2;
  	avg=sum/2.0;
  	
  	printf("average :%.3f",avg);
  
  return 0;
}

