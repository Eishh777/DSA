#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

int max_sum=0;
int current_sum=0;
int maxsubarray(vector<int> arr){
   for(int i =1; i < arr.size(); i++){
    max_sum = max(arr[i], current_sum + arr[i]);
    current_sum=max(max_sum, current_sum);

}
return max_sum;
}

int main(){
    vector<int> arr={2,3,4,5,6,7,8};
    cout<<maxsubarray(arr);


}