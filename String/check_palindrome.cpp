#include<iostream>
using namespace std;
void palindrome(string &str){
    int i = 0;
    int j = str.length() - 1;
    

    while(i<j){

        if(str[i] != str[j]){
            cout<<"Given string is not a palindrome"<<endl;
            return;
        }
        i++;
        j--;

    }
    cout<<"String is palindrome"<<endl;

}
int main(){
    string str = "abbaa";

   palindrome(str);

    return 0;
}