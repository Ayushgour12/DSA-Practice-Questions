#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void repeating(int arr[] , int size){
    for(int i=0; i<size; i++){
        int const = 
    }
}



// By using map


//  by using freq count
// int freq_count(int arr[] , int size){
//     int arr1[5] = {0};
//     for(int i=0; i<size; i++){
//              arr1[arr[i]]++;
//     }

//     for(int i=0 ; i<size; i++){
//         if(arr1[i]>1)
//          cout<<"The repeated element in the array is "<<arr1[i]<<endl;
//     }
// }

// void print(unordered_map<int,int> mp){

//     for(auto &x : mp){
//          cout<< x.first << " "<< x.second<<endl;
//     }
// }
// int check(unordered_map<int , int > mp){
//     for(auto x : mp){
//         if(x.second>1){
//             cout<<x.first<<endl;
//         }
//     }
// }

int main(){
    int arr[] = {1,3,4,2,2};
   int size = sizeof(arr) / sizeof(arr[0]);
  // freq_count(arr,size);
//   unordered_map<int , int > mp;


//     for(int i=0; i<size; i++){
//         mp[arr[i]]++;
//     }
//   // print(mp);

//     check(mp);

    repeating(arr , size);
    return 0;
}