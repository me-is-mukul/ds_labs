#include <iostream>
#include<vector>
#include <unordered_map>

using namespace std;
int main(){
    vector<int> arr = {32, 54, -6, -15};
    int n = arr.size();
    int small, big;
    if(arr[0]<arr[1]){
        small = arr[0]; big = arr[1];
    }else{small = arr[1]; big = arr[0];}
    for(int num : arr){
        if(num<big && num>small){
            big = num;
        }else if(num<small){
            big = small;
            small = num;
        }
    }
    cout<<big;
    return 0;
}
