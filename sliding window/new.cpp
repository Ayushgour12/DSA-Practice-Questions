#include<iostream>
using namespace std;
int &print(){
    int i = 10;
    return i;

}
int main(){
    
int x = print();

cout<<x<<endl;
    return 0;
}