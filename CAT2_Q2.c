#include <stdio.h>

int main() {
    // Part ii: Declaring and initializing a 2D array named scores
    int scores[2][4] = {
        {65, 92, 35, 70},
        {84, 72, 59, 67}
    };

    // Part iii: Printing the elements of the array using a nested for loop
    printf("Elements of the scores array:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d ", scores[i][j]);
        }
        printf("\n"); // Newline after each row
    }

    return 0;
}