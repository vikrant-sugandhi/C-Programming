#include <stdio.h>
#include <stdlib.h>
#include <time.h> // For time() function

int main() {
    // Seed the random number generator using the current time
    srand(time(NULL));

    // Generate and print 5 random numbers
    for (int i = 0; i < 5; i++) {
        int randomNumber = rand();
        printf("Random number %d: %d\n", i + 1, randomNumber);
    }

    // Generate a random number within a specific range (e.g., 1 to 100)
    int randomInRange = (rand() % 100) + 1;
    printf("Random number between 1 and 100: %d\n", randomInRange);

    return 0;
}


