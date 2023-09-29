#include<iostream>
#include<string>

using namespace std;

string remove(string &str , int n){
       
       int j=0;
      for(int i=0; j<n-1;){
            if(str.length()==0){
                return str;
            }
            
           if(str[i] == str[i+1]){
                  str.erase(i , 2);
                  i = 0;        
           }
           else{
            i++;
           }
           j++;
            
      }
}
int main(){
   string  str = "aaaa";
   int n = str.length();
   remove(str , n);
   cout<<str<<endl;
    return 0;
}