#include<iostream>
using namespace std;
#include<vector>

int search(vector<int>& nums , int target){
    
    //define the left and right pointer

    int n = nums.size();
    int low = 0;
    int high = n - 1;

    while(low <= high){
        
        int mid = low + (high - low)/2;

        if(nums[mid] == target){
            return mid;
            break;
        }
        else if(nums[mid] > target){
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }
    return -1;
}


int main(){

    vector<int> vec;

    search(vec , 8);



    return  0;
}