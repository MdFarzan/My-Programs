#include <stdio.h>
#include <conio.h>
//2. two numbers input and display
void main(){
    int x,y;
    printf("Enter x and y: ");
    scanf("%d %d", &x, &y);

    printf("Value of x: %d", x);
    printf("\r\n");
    printf("Value of y: %d", y);

    getch();
}