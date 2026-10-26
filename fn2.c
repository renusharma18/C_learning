//with arguments and without return value
#include <stdio.h>
void printstar(int n);
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    printstar(n);
    return 0;
    
    }

void printstar(int n){
    for(int i=0; i<n; i++){
        printf("*");
    }
}