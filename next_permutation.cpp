
thi is for the return type problem not for the void one

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int ind = -1;
        int n = nums.size();
        for(int i = n-2 ; i >=0 ; i--){
            if ( nums[i] < nums[i+1]){
                ind = i ;
                break;
            }
        }
        if ( ind == -1){
            reverse(nums.begin(),nums.end());
            return nums;
        }

        for(int i = n-1 ; i >ind ; i++){
            if ( nums[i] > nums[ind]){
                swap(nums[i] ,nums[ind]);
                break;
            }

        }

        reverse(nums.begin()+ind+1 , nums.end() );
        return nums;
        
        







        
    }
};











//for the leetcode one

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n  = nums.size();
        bool flag = 0;
        for(int i = n - 1 ; i > 0 ; i--){
            if(nums[i-1] < nums[i]) {
                flag = 1;
                for(int j = n-1 ; j >=0 ; j--){
                    if(nums[j] > nums[i-1]){
                        swap(nums[i-1] , nums[j]);
                        reverse(nums.begin() + i , nums.end());
                        break;
                    } 
                }
                break;
            }
        }
        if(flag == 0){
            reverse(nums.begin(), nums.end());
        }
    }
};


//stl wala


next_permutation(nums.begin, nums.end() );
