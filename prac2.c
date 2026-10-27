#include <stdio.h>
int main(){
    int num;
    char c;

    float a;
    printf("Which one would you like to convert?\n");
    printf("Enter a number between 1 and 5: ");
    scanf("%d", &num);
    switch(num){
        case 1:
        printf("Converting km to miles\n");
            printf("Enter km: ");
            scanf("%f", &a);
            printf("%.2f km is equal to %.2f miles\n", a, a*0.621);
            break;
            case 2:
            printf("Converting inches to foot\n");
            printf("Enter inches: ");
            scanf("%f", &a);
            printf("%.2f inches is equal to %.2f foot\n", a, a*0.0833);
            break;
            case 3:
            printf("Converting cm to inches\n");
            printf("Enter cm: ");
            scanf("%f", &a);
            printf("%.2f cm is equal to %.2f inches\n", a, a*0.393);
            break;
            case 4:
            printf("Converting pounds to kg\n");
            printf("Enter pounds: ");
    scanf("%f", &a);
            printf("%.2f pounds is equal to %.2f kg\n", a, a*0.453);
            break;
            case 5:
            printf("Converting inches to meters\n");
            printf("Enter inches: ");
            scanf("%f", &a);
            printf("%.2f inches is equal to %.2f meters\n", a, a*0.0254);
            break;
        default:
            printf("Oops! Invalid input. Enter any character to exit the program: \n");
        scanf(" %c",&c);
        printf("Program exited! Have a nice day!\n");
    }
    return 0;
}