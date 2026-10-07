#include<stdio.h>
#include<conio.h>
#include<math.h>

int main() {
    int year;

    printf("Enter Year to check whether it is Leap Year or Not: ");
    scanf("%d", &year);

    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) {
        printf("Year %d is a leap year", year);
    }
    else {
        printf("Year %d is not a leap year", year);
    }
}