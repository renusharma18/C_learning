#include <stdio.h>
int main(){
    int i, age;
    for(i=0; i<5; i++){
        printf("Enter your age: ");
        scanf("%d", &age);
        printf("Your age is: %d\n", age);
        if(age > 5)
            continue;
    }
            return 0;
    }