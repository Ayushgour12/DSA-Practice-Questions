#include <bits/stdc++.h> 
using namespace std;
bool findRedundantBrackets(string &s)
{
    stack<int> st;
    for(int i=0; i<s.length(); i++){
    char ch = s[i];
    
     bool oper = true;
    if(ch == '(' || ch == '+' || ch == '-' || ch == '/' || ch == '*'){
             st.push(ch);
    }
    else{
        if(ch == ')'){
            
            while(st.top() != '('){
                char c = st.top();
                if (c == '+' || c == '-' || c == '/' || c == '*') {
                  oper = false;
                }

                 st.pop();
            }
           
           if(oper == true){
          return true;
      }
      st.pop();
        }
    }
      
         
   }
   return false;
}
int main(){
    string str = "((a+b))";
    cout<<findRedundantBrackets(str);

}