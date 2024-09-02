#include<iostream>
#include <set>
using namespace std;

int unioncount(int arr1[], int n1, int arr2[], int n2){
    set<int> unionSet;

    for(int i=0; i<n1; i++){
        unionSet.insert(arr1[i]);
    }

    for(int i=0; i<n2; i++){
        unionSet.insert(arr2[i]);

    }

    return unionSet.size();
}

int main(){
    int arr1[] = {1, 2, 3, 4, 5};
    int n1=sizeof(arr1)/sizeof(arr1[0]);
    

    int arr2[] = {4,5,6,7,8,9};
    int n2=sizeof(arr2)/sizeof(arr2[0]);

   cout<< unioncount(arr1, n1, arr2,n2)<<endl;



}


