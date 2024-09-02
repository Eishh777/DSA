#include <iostream>
#include<algorithm>

int kthsmallestelement(int arr[], int k, int n){
    std::sort(arr, arr+n);
    return arr[k-1];
}

int main(){
    int arr[]={1,4,3,2,5,9,8};
    int n=sizeof(arr)/sizeof(arr[10]);
    int k=3;

    int result = kthsmallestelement(arr,n,k);
    std::cout << result << std::endl;

    return 0;
}