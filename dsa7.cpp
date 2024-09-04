#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int getmindiff(vector<int> &arr, int n, int k){
    if(n==1) return 0; 
    sort(arr.begin(), arr.end());

    int max_height=arr[n-1];
    int min_height=arr[0];
    int initial_diff=max_height-min_height;
    int min_diff=initial_diff;

    for(int i =0 ; i<n; i++){
        int current_max=max(arr[i-1]+k, arr[n-1]-k);
        int current_min=min(arr[0]+k, arr[i]-k);

        if(current_min<0) continue;

        min_diff=min(min_diff, current_max- current_min);


    }
    return min_diff;

}

int main(){
    vector<int>arr={1,2,3,4,5};
    int n= 5;
    int k=2;
    int result = getmindiff(arr, n , k);
    cout<<result<<endl;

}