#include<iostream>
using namespace std;
#include<vector>

int lowerBound(vector<int> &nums , int n , int x){

    int low = 0;
    int high = nums.size() -1;

    int ans = n;

    while (low <= high)
    {
        int mid = low + (high - low)/2;

        if(x == nums[mid]){
            return mid;
        }
        else if(x > nums[mid]){
            low = mid + 1;
        }
        else{
            ans = mid;
            high = mid - 1;
        }
    }

    return ans;
    
}

int main(){

    
    lower_bound()

    return 0;
}