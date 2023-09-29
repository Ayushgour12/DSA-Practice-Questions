#include<iostream>
using namespace std;
int main(){
    int year =  1924;

    if( year % 4 == 0 && year % 100 != 0  || year % 400 == 0){
        cout<<"Given year is a leap year :"<<endl;
    }
    else{
        cout<<"Given year is not a leap year"<<endl;
    }
    return 0;
}