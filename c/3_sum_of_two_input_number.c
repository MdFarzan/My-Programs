#include <stdio.h>
#include <conio.h>

// 3. sum of three input numbers
void input();
int sum(int, int);

int x, y, res;

void main(){

    input();
    res = sum(x, y);
    printf("Sum of x+y= %d", res);

    getch();
}

void input()
{
    printf("Enter x value: ");
    scanf("%d", &x);

    printf("Enter y value: ");
    scanf("%d", &y);
}

int sum(int x, int y){
    return x+y;
}