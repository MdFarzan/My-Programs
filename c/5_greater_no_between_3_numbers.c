#include <stdio.h>
#include <conio.h>

int findGreater(int,int,int);
// 5. if else using greatest number finder between three numbers
void main(){

    int x,y,z;
    printf("Greatest number finder between three numbers\r\n\n");

    printf("Enter x, y, z as positive values: ");
    scanf("%d%d%d", &x, &y, &z);

    if(x < 0 || y < 0 || z < 0){
        printf("Please enter positive numbers!");
    }
    else{
        printf("Greater number is: %d" , findGreater(x, y, z));
    }

    

    getch();
}

int findGreater(int x, int y, int z){

    if(x > y && x > z)
        return x;
    else if(y > z && y > x)
        return y;
    else
        return z;

}