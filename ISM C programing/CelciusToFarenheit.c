#include<stdio.h>
#include<conio.h>
#include<math.h>

int main(){
    float c, f;
    printf("Enter celcius Value: ");
    scanf("%f", &c);
    f= 1.8*c +32;
    printf("Degree Farenheiot: %f", f);

    return 0;
}