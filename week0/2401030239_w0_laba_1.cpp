#include <iostream>
#include<vector>
#include <unordered_map>
#include <algorithm>

using namespace std;
int main(){
    vector<int> arr = {1, 2, 7, 3, 5};
    unordered_map<int, int> oho;
    for(int num : arr){
        oho[num]++;
    }
    for(auto it : oho){
        cout<<it.first<<" occurs "<<it.second<<" times.\n";
    }
}

