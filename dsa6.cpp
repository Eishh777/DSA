#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int minjump(vector<int> &arr){
    if(arr.size()<=1) return-1;
    if(arr[0]==0) return -1;


    int jump=0;
    int current_end=0;
    int farthest=0;

    for(int i=0; i<arr.size(); i++){
        farthest=max(farthest, i+arr[i]);//updating farthest we can reach
        if(i==current_end){
            jump++;
            current_end=farthest;

        }
        if(current_end>=arr.size()-1){
            return jump;
        }

    }
    return -1;

 }

 int main(){
    vector<int> arr = {2,3,1,1,4};
    cout<<minjump(arr)<<endl;
    return 0;
 }

