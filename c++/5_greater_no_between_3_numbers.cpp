#include <iostream>
#include <conio.h>
#include <string>
using namespace std;

// 5. if else statement

int x, y, z;
int findGreater(int, int, int);

int main(){
    
    cout<<"Enter x, y, z value: ";
    cin>>x>>y>>z;

    if(x == y && x == z )
        cout<<"All values are equal";
    else
        cout<<"Greater value is: "<<findGreater(x, y, z);
    

    getch();
    return 0;
}

int findGreater(int x, int y, int z){

    if(x > y && x > z)
        return x;
    
    else if(y > x && y > z)
        return y;

    else 
        return z;
}