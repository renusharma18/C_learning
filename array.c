#include <stdio.h>
int main(){
    int marks[2][4] = {{28,29,26,25}, {30,27,28,24}};
   /* printf("Enter marks of 4 subjects: ");
    for(int i=0; i<4; i++){
        scanf("%d", &marks[i]);
    }
    printf("Marks of student are: ");
    for(int i=0; i<4; i++){
        printf("%d ", marks[i]);
    }
    return 0;

} */
for (int i=0; i<2; i++){
    for(int j=0; j<4; j++){
        printf("%d ", marks[i][j]);
    }
        printf("\n");
}
    
    return 0;
}
    
