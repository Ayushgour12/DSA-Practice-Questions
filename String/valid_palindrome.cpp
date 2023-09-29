#include<iostream>
using namespace std;
string convert(string &str){
          int i = 0;
          int j = str.length()-1;
          while(i<=j){
              if(str[i] >='A'  && str[i]<= 'Z'){
                str[i] = str[i] -'A' + 'a';
              }
              i++;
          }
          return str;
}

void valid_palindrome(string &str){
    
     str = convert(str);
    int i=0;
    int j = str.length() - 1;
    while(i<=j){
    while(str[i] >='\0' && str[i] <= '?'){
           i++;
    }
    while(str[j] >='\0' && str[j] <= '?'){
           j--;
    }

    if(str[i] != str[j]){
        cout<<"String is not a palindorme"<<endl;
        return; 
    }
    i++;
    j--;
    }
    cout<<"String is palindrome"<<endl;
    return;
    
}
int main(){

    string str =  "A man, a plan, a canal: Panama";
    valid_palindrome(str);

    return 0;
}