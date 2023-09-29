#include<iostream>
#include<string.h>
#include<bits/stdc++.h>
using namespace std;
int main(){
    string str1 = "abcd";
    string str2 = "dbaac";
     int temp = 0;
     int size1 = str1.length();
     int size2 = str2.length();
     if(size1 != size2){
        cout<<"string is not anagram"<<endl;
        return 0;
     }
    sort(str1.begin() , str1.end());
    sort(str2.begin() , str2.end());

        for (int i = 0; i < size1; i++){
        if (str1[i] != str2[i]){
           temp  = 1;
           break;
           }
        }

        if(temp==1)
          cout<<"String is not anagram"<<endl;
          else
          cout<<"String is anagram"<<endl;

    return 0;
}