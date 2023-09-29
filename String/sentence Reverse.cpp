#include <iostream>
using namespace std;
void reverse(string &str)
{
    int size=str.size();
    int i=0,j=size-1;
    while(i<=j)
    {
        swap(str[i],str[j]);
        i++;
        j--;
    }
    cout<<str;
}
int main() {
    string str2;
    string str="My name is karan";
    int size=str.length(),i=0;
       string ch="";
    for(int i=0;i<str.length();i++)
    {
        
        while(str[i]!=' ' && i<str.length())
        {
        ch=str[i]+ch;
        i++;
        }
      str2 = ch + " ";
    }
    cout<<str2<<endl;
           return 0;
}