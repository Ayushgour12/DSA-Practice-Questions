#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int row_sorting(int arr[][2] , int column){
    for(int i=0; i<3; i++){
        sort(arr[i] , arr[i] + column);
    }
}
int merge_overlapping(int arr[][2] , int n){
    for(int i=0; i<n+1; i++){
        if(arr[i][1] >= arr[i+1][0]){
            int temp =  max(arr[i][1] , arr[i+1][1]);
            arr[i][1] = temp;
            cout<<arr[i][0]<<","<<arr[i][1]<<endl;
            arr[i+1][0] = arr[i+2][0];
            arr[i+1][1] = arr[i+2][1];
            n--;
        }
        else{
            cout<<arr[i][0]<<","<<arr[i][1]<<endl;

        }
    }
}

int main(){
    vector<pair<int, int > > v;
    int arr[4][2] = {{1,2} , {2,3} };
    row_sorting(arr , 2);
     merge_overlapping(arr ,2);

    
    return 0;
}