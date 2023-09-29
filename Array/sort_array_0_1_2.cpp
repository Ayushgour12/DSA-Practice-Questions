#include<iostream>
#include<map>
using namespace std;
int main(){
    int arr[] = {0,1,0,0,0,1,1,0,1,2,2,2,2};
    int size = sizeof(arr) / sizeof(arr[0]);
    map<int,int> mp;
  for(int i=0; i<size; i++){
    mp[arr[i]]++;
  }
    //  map<int , int> :: iterator i;
     auto i = mp.begin();
         while(i != mp.end()){
            cout<<i->first<< " "<<i->second<<endl;
            i++;
         }
    return 0;
}