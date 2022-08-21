#include <stdio.h>
#include <conio.h>
// 9. Swapping numbers by reference
int x, y;

void input();
void swap(int *, int *);

int main(){
    input();

    swap(&x, &y);

    printf("After swapping: \r\n");
    printf("x: %d, y: %d", x, y);

    getch();
    return 0;
}

void input(){
    printf("Enter x and y value: \r\n");
    scanf("%d%d", &x, &y);

    printf("Before swapping: \r\n");
    printf("x : %d, y: %d\r\n", x, y);
}

void swap(int *x, int *y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}