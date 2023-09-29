#include<iostream>
using namespace std;
string compression(string &str){
    int arr[26] = {0};
        int i = 0;
       
        while(str[i] != '\0'){
            char ch = str[i];
            int num = ch - 'a';
             arr[num]++;
             i++;
        }
        //  int maxi = -1;
        //  int ans = -1;
       //  string str2 = "";
       //  int j=0;
        for(int i=0; i<26; i++){
            if(arr[i] != 0){
              str =  i + 'a';
              str = str +  to_string(arr[i]);
              cout<<str;
            }
            
        }
        return str;
}
int main(){
    string str = "aaaaabbbee";
   compression(str);
    return 0;
}