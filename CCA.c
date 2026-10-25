//Compiled and Menu by Rachit Maheshwari
//Team Members: Praneshwar Ahire, Puneet Rao, Pushkar Arora, Rachit Maheshwari, Ram Sawadh, Rohan Chavan
#include <stdio.h>
int main() {
    int choice;

    while (choice != 5) {
        printf("\n========== MENU ==========\n");
        printf("1. Check prime number and find factorial (Pushkar Arora)\n");
        printf("2. Fibonacci series (Rachit Maheshwari)\n");
        printf("3. Reverse a number (Ram Sawadh)\n");
        printf("4. Even/Odd and Positive/Negative/Zero check (Rohan Chavan)\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        if (scanf("%d", &choice) != 1) {
            while (getchar() != '\n');
            choice = 0;
            printf("Invalid input. Please enter a number between 1 and 5.\n");
            continue;
        }
        printf("\n");

        switch (choice) {

        case 1: {
printf("Program in C to check if a number is prime or not and to find the factorial of number.\n");
//Pushkar Arora
//Check for prime number and to find the factorial
//Code written by Pushkar Arora starts here
   int num, i, isPrime = 1;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num <= 1) {
        isPrime = 0;
    } else {
        for (i = 2; i <= num / i; i++) {
            if (num % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }
    if (isPrime == 1) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }
    int a,j,fact=1;
    printf("\n Enter a number : ");
    scanf("%d",&a);
    for(j=2;j<=a;j++)
        {
            fact=fact*j;
        }
    printf("The factorial of %d is %d",a,fact);
//Code written by Pushkar Arora ends here

printf("\n\n");
            break;
        }

        case 2: {
//Code written by Rachit Maheshwari starts here
//Rachit Maheshwari
//Program to display the fibonacci series upto the entered number
    printf("Program to display the fibonacci series upto the entered number.\n");
    int limit, first = 0, second = 1, next;
    printf("Enter a number: ");
    scanf("%d", &limit);
    printf("Fibonacci Series: ");
    for (int i = 0; i < limit; i++) {
        printf("%d, ", first);
        next = first + second;
        first = second;
        second = next;
    }   
    printf("\n\n");
//Code written by Rachit Maheshwari ends here
            break;
        }

        case 3: {
printf("Program to reverse a number.\n");

//Ram Sawadh
//Number Reversal
//Code written by Ram Sawadh starts here
    int n, reversed = 0, digit;
    printf("Enter a number: ");
    scanf("%d", &n);
    while (n > 0) {
        digit = n % 10;
        reversed = reversed * 10 + digit;
        n = n / 10;
    }
    printf("Output: %d\n", reversed);
//Code written by Ram Sawadh ends here

printf("\n");
            break;
        }

        case 4: {
printf("Program to check if a number is even or odd then to check if it is positive, negative or zero.\n");

//Rohan Chavan
//Code written by Rohan Chavan starts here
    int number;
    printf("Enter an integer: ");
    scanf("%d", &number);
    // Even or Odd check
    if (number % 2 == 0)
        printf("%d is Even.\n", number);
    else
        printf("%d is Odd.\n", number);
    // Positive, Negative or Zero check
    if (number > 0)
        printf("%d is Positive.\n", number);
    else if (number < 0)
        printf("%d is Negative.\n", number);
    else
        printf("The number is Zero.\n");
//Code written by Rohan Chavan ends here
            break;
        }

        case 5:
            printf("Exiting the program. Goodbye!\n");
            break;

        default:
            printf("Invalid choice. Please enter a number between 1 and 5.\n");
        }
    }

return 0;
}