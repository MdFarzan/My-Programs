#include <stdio.h>
#include <conio.h>

// 10. Greater nubmer finder between 2 number using selective assignment (ternary operator)
void input();

int x,y,z;

int main(){

    input();
    
    z=x>y?x:y;
    printf("Greater number is: %d", z);

    getch();
    return 0;
}

void input(){
    printf("Enter x and y values: \r\n");
    scanf("%d%d", &x, &y);
}