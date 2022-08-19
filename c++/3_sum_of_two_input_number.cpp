#include <iostream>
#include <conio.h>
using namespace std;

// 3. Sum of two numbers

int x, y, res;
void input();
int sum(int, int);

int main(){

    input();
    res = sum(x, y);
    cout<<"x + y = "<<res;


    cout<<endl<<endl<<"Press any key to exit...";
    getch();    
    return 0;
}

void input(){
    cout<<"Enter x and y value:";
    cin>>x>>y;
}
int sum(int x, int y){
    return x+y;
}