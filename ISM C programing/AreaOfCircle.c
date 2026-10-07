//WAP to find area of circle

#include<stdio.h>
//#include<conio.h>
//#include<math.h>

int main(){
	printf("Enter value of radius of your circle: ");
	float r, area;
	scanf("%f", &r);
	area= 3.14*r*r;
	printf("Area of the circle is: %.2f", area);
	return 0;
}