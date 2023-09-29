#include <iostream>
using namespace std;
void reverse2(string &str)
{
    int size = str.size();
    int i = 0, j = size - 1;
    while (i <= j)
    {
        swap(str[i], str[j]);
        i++;
        j--;
    }
}
int main()
{
    string str = "My name is karan";
    int size = str.length(), i = 0;
    reverse2(str);

    for (int i = 0; i < str.length(); i++)
    {
        string ch = "";

        while (str[i] != ' ' && i < str.length())
        {
            ch = str[i] + ch;
            i++;
        }
        string str = ch + ' ';
        cout<<str;
    }

   
   return 0;
}