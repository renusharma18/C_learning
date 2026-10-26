#include <stdio.h>
int main() {
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    switch(age) {
        case 18:
            printf("You are eligible to vote.\n");
            break;
        case 14 ... 17:
            printf("You are a teenager but not eligible to vote.\n");
            break;
        default:
            printf("You are not eligible to vote.\n");
    }
    return 0;
}