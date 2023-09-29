#include<iostream>
#include<stack>
using namespace std;

bool valid(string str){
    stack<char> s;

    for(int i=0; i<str.length(); i++){
        char ch = str[i];
        if(ch == '(' || ch == '{' || ch == '['){
            s.push(ch);
        }
        else{
            char ch1 = s.top();
            if(!s.empty()){
            if(ch == ')' && ch1 == '('){
                s.pop();
            }
            else if(ch == '}' && ch1 =='{'){
                s.pop();
            }
            else if(ch==']' && ch1 == '['){
                s.pop();
            }
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
    
    string str = "(){}";

  cout<< valid(str);


    return 0;
}