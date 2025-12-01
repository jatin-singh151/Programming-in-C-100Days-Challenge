/*Use pointer to struct to modify and display data using -> operator.
Input 1:
Student pointer modifying values: John 106 91
Output 1:
Modified Data: Name: John | Roll: 106 | Marks: 91
Explanation 1:
Pointer to structure accesses and modifies data using the arrow  operator.
*/
#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    int marks;
};

int main() {
    struct Student s;
    struct Student *ptr = &s;   // pointer to structure

    // Modify data using -> operator
    printf("Name: ");
    scanf("%s", ptr->name);

    printf("Roll: ");
    scanf("%d", &ptr->roll);

    printf("Marks: ");
    scanf("%d", &ptr->marks);

    // Display data using -> operator
    printf("\nModified Data: Name: %s | Roll: %d | Marks: %d\n",
           ptr->name, ptr->roll, ptr->marks);

    return 0;
}
