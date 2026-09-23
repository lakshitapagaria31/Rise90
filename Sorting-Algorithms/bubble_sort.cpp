// Bubble Sort

#include<bits/stdc++.h>
using namespace std;
class Solution {
    public:
        vector<int> bubbleSort(vector<int>& nums) {
            for(int i = nums.size() - 1; i >= 1; i--){
                for(int j = 0; j <= i-1; j++){
                    if(nums[j] > nums [j + 1]){
                        swap(nums[j+1], nums[j]);
                    }
                }
            }
            return nums;
    
        }
    };
    

// optimised code if array is sorted 
class Solution {
    public:
        vector<int> bubbleSort(vector<int>& nums) {
            for(int i = nums.size() - 1; i >= 1; i--){
                int didSwap = 0;
                for(int j = 0; j <= i-1; j++){
                    if(nums[j] > nums [j + 1]){
                        swap(nums[j+1], nums[j]);
                        didSwap = 1;
                    }
                }
                if(didSwap == 0){
                    break;
                }
            }
            return nums;
    
        }
    };
    