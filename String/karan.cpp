#include<iostream>
#include<string>
using namespace std;
int function(string &str)
{
    int len=str.length();
    int i=0,j=1,count=1;
    for(j=1;j<str.length();j++)
    {
        if(str[j-1]==str[j])
        {
            j++;
            count++;
        }
        else if(str[j-1]!=str[j])
        {
            
            str[i]=str[j-1];
            i++;
            
            if(count>=2)
            {
                str = str[i] + to_string(count);
            }
             count=0;
        }
        cout<<str;
        return str.length();
}
           
    }
    
int main() {
    string str="aaabbcccdd";
   int i = 2;
     str = str[i] + to_string(i);
     function(str);
     
      return 0;
}