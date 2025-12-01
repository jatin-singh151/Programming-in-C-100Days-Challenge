#include <stdio.h>
#include <string.h>

int main() {
    char str[200], words[50][50];
    int i = 0, j = 0, k = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    // Split sentence into words
    while (str[i] != '\0') {
        if (str[i] != ' ' && str[i] != '\n')
            words[j][k++] = str[i];
        else {
            words[j][k] = '\0';
            j++;
            k = 0;
        }
        i++;
    }

    // Print in reverse
    printf("Reversed words: ");
    for (int x = j - 1; x >= 0; x--)
        printf("%s ", words[x]);

    return 0;
}
