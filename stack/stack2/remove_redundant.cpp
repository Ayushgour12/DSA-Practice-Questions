#include <bits/stdc++.h> 
using namespace std;

bool findRedundantBrackets(string &str)
{
     stack<char> s;
        for(int i=0; i<str.length(); i++){
         
             bool oper = true;
             char ch = str[i];
          if(ch == '(' || ch== '*' || ch == '/' || ch =='+' || ch =='-'){
               s.push(ch);
          }
          else{
               
               if(ch == ')'){
                 
                 while(s.top() != '('){
                   char c = s.top();
                   if(c =='*' || c == '/' || c== '+' || c=='-'){
                     oper = false;
                   }
                   s.pop();
                 }

                 if (oper == true) {
                   return true;
                 }
                 s.pop();
               }
          }
        }
        return false; 
          
}