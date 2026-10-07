#include<stdio.h>
#include<conio.h>
#include<math.h>

int main(){
    float c, f;
    printf("Enter Farenheit Value: ");
    scanf("%f", &f);
    c= (f-32)/1.8;
    printf("Degree Celcius: %f", c);

    return 0;
}