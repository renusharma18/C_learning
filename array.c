#include <stdio.h>
int main(){
    int marks[4];
    printf("Enter marks of 4 subjects: ");
    for(int i=0; i<4; i++){
        scanf("%d", &marks[i]);
    }
    printf("Marks of student are: ");
    for(int i=0; i<4; i++){
        printf("%d ", marks[i]);
    }
    return 0;

}