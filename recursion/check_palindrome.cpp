#include<iostream>
using namespace std;
bool palindrome(string str , int i , int j){
     if(i>=j){
       return true;
     }
     if(str[i] != str[j]){
        return false;
     }
     i++;
     j--;
  return  palindrome(str , i , j);

}
int main(){
    string str = "abba";
    int i=0;
    int j = str.length() - 1;
  if(palindrome(str , i , j)){
    cout<<"String is palindrome"<<endl;
  }
  else{
    cout<<"String is not a palindrome"<<endl;
  }
    return 0;
}