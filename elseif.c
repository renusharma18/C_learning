#include <stdio.h>
int main() {
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    if(age >= 18){
        printf("You are eligible to vote.\n");
    } else if (14 <= age && age < 18){
        printf("You are a teenager but not eligible to vote.\n");

    } 
    return 0;
}