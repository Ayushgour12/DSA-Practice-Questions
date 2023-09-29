#include<iostream>
using namespace std;
int main(){
    char ch = 'A';
    
    if(ch >= 'a'  && ch <= 'z'){
        cout<<"Given character is lowercase"<<endl;
    }
    else if(ch >='A' && ch  <= 'Z'){
        cout<<"Given character is Uppercase"<<endl;
    }
    else if(ch >= '!' && ch <= '@'){
        cout<<"Given characeter is special character"<<endl;
    }

    return 0;
}