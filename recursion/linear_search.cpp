#include<iostream>
using namespace std;
bool search(int arr[] , int size , int target){
    if(size<=1){
        return 0;
    }
    if(arr[0] == target){
        return 1;
    }
    else{
        search(arr+1 , size-1 , target);
    }

}
int main(){
    int arr[] = {1,2,32,4,331,132,42};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 33;
    if(search(arr , size , target)){
        cout<<"The element is found"<<endl;
    }
    else{
        cout<<"ELement is not found"<<endl;
    }
    return 0;
}