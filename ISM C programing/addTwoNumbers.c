////WAP to add two numbers

#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
	printf("Enter two numbers");
	float a, b, sum;
	scanf("%f %f", &a, &b);
	sum= a+b;
	printf("Sum of numbers is: %.2f", sum);
	
	return 0;
}
