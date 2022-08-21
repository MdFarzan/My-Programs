#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h> // to use Sleep function for windows

// 8. menu driven program for addition, subtration, multiplication and division of two numbers

float x, y;
float res;
char choice;
void input();

int main(){

    while (1)
    {   
        system("cls");
        printf("---- Menu driven program for +, -, *, / of two numbers\r\n\r\n");
        printf("Enter your choice: \r\n");
        printf("For addition: +\r\n");
        printf("For subtraction: -\r\n");
        printf("For multiplication: *\r\n");
        printf("For division: /\r\n");
        printf("For exit: e \r\n");
        printf("Your choice: ");
        scanf("%c", &choice);
    
    
        switch(choice){
            case '+':
                input();
                printf("x + y = %.2f", x+y);
                getch();
                fflush(stdin); // without clean it displaying default case
                break;

            case '-':
                input();
                printf("x - y = %.2f", x-y);
                getch();
                fflush(stdin); // without clean it displaying default case
                break;
            
            case '*':
                input();
                printf("x * y = %.2f", x*y);
                getch();
                fflush(stdin); // without clean it displaying default case
                break;
            
            case '/':
                input();
                printf("x / y = %.2f", x/y);
                getch();
                fflush(stdin); // without clean it displaying default case
                break;

            case 'e':
                printf("Exiting...");
                Sleep(1000);
                fflush(stdin); // without clean it displaying default case
                exit(0);
            
            default:
                printf("Please enter a valid choice!");
                Sleep(1000);
        }
    }

    return 0;
}

// for input
void input(){
    printf("Enter x and y value: ");
    scanf("%f%f", &x, &y);
}