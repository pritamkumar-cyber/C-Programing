#include<stdio.h>
#include<math.h>
#include<conio.h>

int main(){
    printf("Enter Length And Breadth: ");
    float l, b, area, perimeter;
    scanf("%f %f",&l ,&b);
    area= l*b;
    perimeter= 2*(l+b);
    printf("Area is: %.2f", area);
    printf("\nPerimeter is: %.2f", perimeter);

    return 0;
}