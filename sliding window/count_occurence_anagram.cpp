#include<iostream>
using namespace std;

bool checkequal(int arr[] , int arr2[]){
    for(int i=0; i<26; i++){

        if(arr[i] != arr2[i]){
            return false;
        }
    }
    return true;
}

int occurence(int count1[] , string str , int win){
    
     int count2[26] = {0};
    // if(win > str.length()){
    //     cout<<"NOt possible "<<endl;
    //     return ;
    // }
        int i=0; int j=0;
     while(j < win){ 
        
          char ch = str[j];
          int temp = ch - 'a';
           count2[temp]++;   
          j++;
     }
     int coun = 0;
   if(checkequal(count1 , count2)){
            coun++;
         }

     while(j<str.length()){
        char ch = str[i] ;
        char ch2 = str[j];
         int temp =  ch - 'a';
         int temp2 = ch2 - 'a';

         count2[temp]--;
         count2[temp2]++;

         if(checkequal(count1 , count2)){
            coun++;
         }
         i++;
         j++;
     }

     
       return coun;
}
int main(){
     string str = "aabaabaa";
     string str2 = "aaba";

     int win = str2.length();
     int count1[26] = {0}; 

     for(int i=0; i<str2.length(); i++){
          char ch = str2[i];
         int temp = ch - 'a';
         count1[temp]++;
     }

     

     int count =  occurence(count1 , str , win);
     cout<<"Ans is "<<count<<endl;
    return 0;
}