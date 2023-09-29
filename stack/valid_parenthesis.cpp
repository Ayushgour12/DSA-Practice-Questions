#include<iostream>
#include<stack>
using namespace std;


bool valid_parenthesis(stack<char> s  , string str){
    for(int i=0; i<str.length(); i++){
    char ch = str[i];
    if(ch == '(' || ch == '{' || ch == '[' ){
           s.push(ch);
    }
    else{
        if(!s.empty()){
              char ch1 = s.top();
              if(ch==')' && ch1 == '(' )
                s.pop();  
                
             else if(ch=='}' && ch1 == '{' )
                s.pop();
            
              else if(ch==']' && ch1 == '[' )
                s.pop();
                else{
                    return false;
                }
                              
        }
        else{
            return false;
        }
    }
    }

    if(s.empty()){
        return true;
    }
    else{
        return false;
    }

}

int main(){

stack<char>s; 
string str = "{(})}";



if(valid_parenthesis(s , str)){
    cout<<"Parenthesis is valid"<<endl;
}
else{
    cout<<"parenthesis is not valid"<<endl;
}

    return 0;
}