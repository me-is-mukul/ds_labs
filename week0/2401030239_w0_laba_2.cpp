#include <iostream>
#include<vector>
#include <unordered_map>

using namespace std;
int main(){
    vector<int> arr = {1, 2, 3, 5, 2, 9, 7, 3, 5};
    int n = arr.size();
    if(n==1){
        cout<<"no change";
        return 0;
    }
    cout<<"elements before rotation : ";
    for(int num : arr){
        cout<<num;
    }
    cout<<"\nelements after rotation : ";
    int a = arr[0];
    for(int i=0; i<n-1; i++){
        arr[i]=arr[i+1];
    }
    arr[n-1]=a;
    for(int num : arr){
        cout<<num;
    }
    return 0;
}
