#include<iostream>
using namespace std;
void reverse(int arr[] , int s , int e){
while(s<e){
    swap(arr[s] , arr[e]);
    s++;
    e--;
}
}
int main(){
    int arr[] = {1,2,3,4,5};
    int k = 2;
    int size = sizeof(arr) / sizeof(arr[0]);

    reverse(arr , 0 , size-1);
   


    reverse(arr , 0 , k-1);

    reverse(arr , k , size-1);
 for(int i=0; i<size; i++){
        cout<<arr[i]<<endl;
    }
    return 0;

}