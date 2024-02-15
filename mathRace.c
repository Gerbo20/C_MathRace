#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function declarations
void addition();
void subtraction();
void multiplication();
void division();

int main() {
    int choice;

    // Seed the random number generator
    srand(time(NULL));

    do {
        // Display menu
        printf("\nMath Race\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Quit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        // Perform action based on choice
        switch(choice) {
            case 1:
                addition();
                break;
            case 2:
                subtraction();
                break;
            case 3:
                multiplication();
                break;
            case 4:
                division();
                break;
            case 5:
                printf("Exiting the program.\n");
                break;
            default:
                printf("Invalid choice. Please enter a number between 1 and 5.\n");
        }
    } while(choice != 5);

    return 0;
}

void addition() {
    int score = 0;
    time_t start_time = time(NULL);

    while (time(NULL) - start_time < 30) {
        int a = rand() % 10;
        int b = rand() % 10;
        int result;
        int answer;

        printf("\n%d + %d = ", a, b);
        scanf("%d", &answer);

        result = a + b;

        if (answer == result) {
            printf("Correct!\n");
            score++;
        } else {
            printf("Incorrect! The correct answer is %d.\n", result);
        }
    }

    printf("\nTime's up! Your score: %d\n", score);
}

void subtraction() {
    int score = 0;
    time_t start_time = time(NULL);
    
    while (time(NULL) - start_time < 30) {
        int a = rand() % 10;
        int b = rand() % 10;
        int result;
        int answer;
        
        printf("\n%d - %d = ", a, b);
        scanf("%d", &answer);
        
        result = a - b;
        
        if (answer == result) {
            printf("Correct!\n");
            score++;
        } else {
            printf("Incorrect! The correct answer is %d.\n", result);
        }
    }
    
    printf("\nTime's up! Your score: %d\n", score);
}

void multiplication() {
    int score = 0;
    time_t start_time = time(NULL);
    
    while (time(NULL) - start_time < 30) {
        int a = rand() % 10;
        int b = rand() % 10;
        int result;
        int answer;
        
        printf("\n%d * %d = ", a, b);
        scanf("%d", &answer);
        
        result = a * b;
        
        if (answer == result) {
            printf("Correct!\n");
            score++;
        } else {
            printf("Incorrect! The correct answer is %d.\n", result);
        }
    }
    
    printf("\nTime's up! Your score: %d\n", score);
}

void division() {
    int score = 0;
    time_t start_time = time(NULL);
    
    while (time(NULL) - start_time < 30) {
        int a = rand() % 10;
        int b = rand() % 9 + 1; // Ensure divisor is not 0
        int result;
        int answer;
        
        printf("\n%d / %d = ", a * b, b);
        scanf("%d", &answer);
        
        result = a;
        
        if (answer == result) {
            printf("Correct!\n");
            score++;
        } else {
            printf("Incorrect! The correct answer is %d.\n", result);
        }
    }
    
    printf("\nTime's up! Your score: %d\n", score);
}
