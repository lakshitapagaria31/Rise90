// Quick Sort 
# include<bits/stdc++.h>
using namespace std;
class Solution {
    public:
        int f(vector<int>& nums, int low, int high){
            int pivot = nums[low];
            int i = low;
            int j = high;
            while(i < j){
                while(nums[i]<=pivot && i <= high - 1){
                    i++;
                }
                while(nums[j]>pivot && j >= low + 1){
                    j--;
                }
                if(i < j){
                    swap(nums[i], nums[j] );
                }
            }
            swap(nums[low], nums[j]);
            return j;
        }
        void qS(vector<int>& nums, int low, int high){
            if(low < high){
                int pIndex = f(nums, low, high);
                qS(nums, low, pIndex-1);
                qS(nums, pIndex + 1, high);
            }
        }
        vector<int> quickSort(vector<int>& nums) {
            qS(nums, 0, nums.size() - 1);
            return nums;
    
        }
    };
    