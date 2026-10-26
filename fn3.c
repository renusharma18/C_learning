//without arguments and with return value
#include <stdio.h>
int takeinput(){
    int i;
    printf("Enter value of i: ");
    scanf("%d", &i);
    return i;
}
int main(){
    int i;
    i = takeinput();
    printf("The value of i is: %d", i);
}