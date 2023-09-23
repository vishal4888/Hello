#include<iostream>
using namespace std;
#include<vector>

int upperBound(vector<int> &arr, int x){

    int low = 0;
    int high = arr.size() - 1;

    int ans = arr.size();

    while (low <= high){
        int mid = low + (high - low)/2;

        if(arr[mid] == x){
            return mid;
        }
        else if(x > arr[mid]){
            low = mid + 1;
        }
        else{
            ans = mid;
            high = mid -1;
        }
    }
    return ans;
    

}

int main(){



    return 0;
}