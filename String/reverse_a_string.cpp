#include<iostream>
using namespace std;
int reverse(string &str , int i , int j){
    

     while(i<j){
         
           swap(str[i] , str[j]);
          
           i++;
           j--;
     }
    

}
string sidha(string &str){
    reverse(str , 0 , str.length()-1);
    int i=0;
    int length = str.length();
    int j=0;
    while( str[i] != '\0'){
        
        while(str[j] != 32  ){
            
            j++; 
            if(j == length){
                reverse(str , i , --j);
                return str;
            
            }       
        }
        
        int temp = j;
        --j;
        

       reverse(str , i , j);

       if(temp == str.length()-1){
            return str;
         }
         
    
        j = temp;
        i = j;
        
       
       while(str[i] <'a' || str[i]>'z'){
        i++;
       }
       
        j = i;
              
    }
}
int main(){
    string str = "My name is karan";

    sidha(str);
    
    cout<<str;
    return 0;
}