#include <stdio.h>
#include <conio.h>
#include <string.h>


char str[20];

void input();
void output(char[]);

// 4. string and their 2 function

void main(){

    input();
    output(str);

    printf("total Length: %u\r\n", strlen(str));
    printf("Lowercase will be: %s\r\n", strlwr(str));
    printf("Uppercase will be: %s\r\n", strupr(str));

    printf("\nPress any key to exit...");
    getch();

}

void input(){
    printf("Enter your name: ");
    gets(str);
}

void output(char str[]){
    puts(str);
}

