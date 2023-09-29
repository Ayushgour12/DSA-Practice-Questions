#include<iostream>
using namespace std;
void conversion(string &str)
{ 
	for(int i=1; i < str.length(); i++){
        
        if(str[i] > 'A' && str[i]<'Z'){
			 str.insert(i-1 , " ");
			  char ch = str[i];
			  str[i] = ch - 'A' + 'a';
		  }
				}
}
    

int main(){
    string str = "YouCanPracticeCodingOnCodezen";
     conversion(str);
 //cout<<str.length();
   // cout<<str<<endl;

    return 0;
}