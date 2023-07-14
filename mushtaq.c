/*Name: Mushtaq ahmed
Father name:M ismail
Roll no:30
BSCS:1st samester
subject:fundamental of programing

Reportt of program...
This program checks if a given number is prime or not. It repeatedly asks the user to enter a number between 2 and 100. If the number is out of range, it gives the user the option to try again. The program continues until the user decides to stop. The "isprime" function is used to determine if a number is prime or not. It returns 1 if the number is prime and 0 if it is not. The program then prints the result.
*/




#include <stdio.h>

int isprime(int num) {
    if (num < 2) {
       return 0;
}
    for (int n = 2; n * n <= num; n++) {
    if (num % n == 0) {
       return 0;
}
}
       return 1;
}

int main() {
    int number;
    while (1) {
    printf(" please Enter a number between 2 and 100: ");
    scanf("%d", &number);
    if (number < 2 ||number >100) {
    printf("Number out of range,\n press 1 to try again: ");
    int option;
    scanf("  %d", &option);
    if (option != 1) {
    break;
}
} else {
    int result = isprime(number);
    printf(" %d",isprime(number));break;
}
}
     return 0;
}
