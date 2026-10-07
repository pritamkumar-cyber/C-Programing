// #include<stdio.h>
// int main(){
//     char alpha;
//     printf("Enter Alphabet to check whether it is consonant or vowel: ");
//     scanf("%c", &alpha);
//     if(alpha== "a" || alpha== "e" || alpha== "i" || alpha== "o" || alpha== "u" || alpha== "A" || alpha== "E" || alpha== "I" || alpha== "O" || alpha== "U"){
//         printf("Entered Alphabet is VOWEL");
//     }
//     else{
//         printf("Entered Alphabet is CONSONANT");
//     }
//     return 0;
// }


#include <stdio.h>

int main() {

    char alpha;

    printf("Enter Alphabet to check whether it is consonant or vowel: ");

    scanf("%c", &alpha);

    if (alpha == 'a' || alpha == 'e' || alpha == 'i' ||
        alpha == 'o' || alpha == 'u' ||
        alpha == 'A' || alpha == 'E' || alpha == 'I' ||
        alpha == 'O' || alpha == 'U') {

        printf("Entered Alphabet is VOWEL");
    }
    else {
        printf("Entered Alphabet is CONSONANT");
    }

    return 0;
}