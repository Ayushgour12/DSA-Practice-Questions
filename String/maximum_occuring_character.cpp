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
char occuring(string &str){
        int arr[26] = {0};
        convert(str);
        int i = 0;
       
        while(str[i] != '\0'){
            char ch = str[i];
            int num = ch - 'a';
             arr[num]++;
             i++;
        }
         int maxi = -1;
         int ans = -1;
        for(int i=0; i<26; i++){
            if(maxi < arr[i]){
                ans = i;
                maxi = arr[i];
            }
        }
            char ch =  'a' + ans;
             return ch;
        

}
int main(){
    string str = "abbbba";
    cout<<occuring(str)<<endl;
    return 0;
}