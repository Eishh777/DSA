#include<iostream>
#include<vector>
#include<set>
using namespace std;

vector<int> intersection(vector<int> &arr1, vector<int> &arr2 ){
    set<int> set1(arr1.begin(),arr1.end() );
    vector<int>intersectarr;

    for(int num : arr2){
        if(set1.find(num)!= set1.end()){
            intersectarr.push_back(num);
            set1.erase(num);

        }
    }

    return intersectarr;

}

int main(){
    vector<int> arr1={1,2,3,4,5,6};
    vector<int> arr2={3,4,5,0,9,8};

    vector<int>result=intersection(arr1,arr2);
    cout<<"intersection: ";
    for(int num: result){
        cout<<num<<" ";
        
    }


}