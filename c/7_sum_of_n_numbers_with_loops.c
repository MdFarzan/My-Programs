#include <stdio.h>
#include <conio.h>

// 7. sum of n number using loop

int sumByForLoop(int);
int sumByWhileLoop(int);
int sumByDoWhileLoop(int);

int main(){

    int n;
    puts("Enter n value: ");
    scanf("%d", &n);

    printf("Sum of %d number is: %d\r\n", n, sumByForLoop(n));
    printf("Sum of %d number is: %d\r\n", n, sumByWhileLoop(n));
    printf("Sum of %d number is: %d\r\n", n, sumByDoWhileLoop(n));

    getch();
    return 0;
}

int sumByForLoop(int n){
    int sum = 0;

    for(; n>=0; n--)
        sum += n;

    return sum;
}

int sumByWhileLoop(int n){
    int sum = 0;
    
    while(n>=0){
        sum += n;
        n--;
    }

    return sum;

}

int sumByDoWhileLoop(int n){
    int sum = 0;

    do{
        sum += n;
        n--;
    }while(n>=0);

    return sum;
}