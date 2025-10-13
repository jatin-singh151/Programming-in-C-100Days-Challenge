#include <stdio.h>

int main() {
    for (int i = 0; i < 5; i++) {          // Rows
        for (int j = 0; j < 5; j++) {      // Columns
            printf("*");
        }
        printf("\n");  // Move to next line after each row
    }
    return 0;
}