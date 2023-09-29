#include<iostream>
#include<stack>
using namespace std;
bool redundant(string &str)
{
    
    stack<char> s;
    for(int i=0;i<str.length();i++)
    {
        char ch=str[i];
        if(ch=='('||ch=='+'||ch=='-'||ch=='*'||ch=='/')
        {
          s.push(ch);
        }
        else{
            if(ch==')')
            {
                bool is_red=true;
                while(s.top()!='(')
                {
                    char temp=s.top();
                    if(temp=='+'||temp=='-'||temp=='*'||temp=='/')
                    {
                        is_red=false;
                    }
                    s.pop();
                }
                if(is_red==true)
                   return true;
                    s.pop();
                
            }
        }
        return false;
    }      
}
int main()
{
string str="((a+b)))";
cout<<redundant(str);
return 0;
}