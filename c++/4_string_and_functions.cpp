#include <iostream>
#include <conio.h>
#include <string>
#include <algorithm>
#include <cctype>
using namespace std;

// 4. String and their function

int main(){
    string str;

    
    cout<<"Enter your name: ";
    getline(cin, str);
    cout<<"You entered: "<<str;

    cout<<endl<<"It's length: "<<str.length();

    transform(str.begin(), str.end(), str.begin(),
              [](unsigned char c)
              { return tolower(c); });

    cout<<endl<<"Lowercase will be: "<<str<<endl;

    transform(str.begin(), str.end(), str.begin(),
              [](unsigned char c)
              { return toupper(c); });
              
    cout<<endl<<"Uppercase will be: "<<str<<endl;

    getch();
    return 0;
}