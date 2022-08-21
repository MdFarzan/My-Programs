#include <stdio.h>
#include <conio.h>
#include <string.h>

// 6. variables in c

struct student{
    int id;
    char name[20];
};

int main(){

    // variables depend on system architechture

    /* primitive */
    int a = 1;
    char b = 'c';
    float c = 4.4;
    double d = 4.444444444;

    /* non primitive */
    struct student f;
    f.id = 1;
    strcpy(f.name, "Satender");

    // to store string
    char e[] = "A string";

    printf("Int value: %d of size %u byte\r\n", a, sizeof(a));
    printf("Char value: %c of size %u byte\r\n", b, sizeof(b));
    printf("Float value: %f of size %u byte\r\n", c, sizeof(c));
    printf("Double value: %lf of size %u byte\r\n", d, sizeof(d));
    printf("String (char array) value: %s of size %u byte\r\n", e, sizeof(e));
    printf("Struct value: %d, %s, of size %u\r\n", f.id, f.name, sizeof(f));

    getch();
    return 0;
}