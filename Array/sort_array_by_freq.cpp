#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {3, 3, 5, 2,2,2, 1, 1, 2};
    int size = sizeof(arr) / sizeof(arr[0]);
    map<int , int > mp;
    for(int i=0; i<size; i++){
         mp[arr[i]]++;
    }
    auto it = mp.begin();
    while(it != mp.end()){
        cout<<it->first << " "<<it->second<<endl;
        it++;
    }
    it = mp.begin();
    auto it2 = mp.begin();

for(int i=0; i<mp.size(); i++){

    int temp = it->second;
    while(it2 != mp.end()){
   if(it->second < it2->second){
        it = it2;      
   }
   it2++;
    }
    int temp = it->second;
    while(temp--){
        cout<<it->first;
    }
    it 

}
    return 0;
}