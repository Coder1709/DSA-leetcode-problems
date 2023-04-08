<h2> Brute force one</h2>



class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int a = 0 , b = 0 , c=0;
        for(int i = 0 ; i < n ; i++){
            if (nums[i]  == 0){
                a++;
            }
            if (nums[i]  == 1){
                b++;
            }
            if (nums[i]  == 2){
                c++;
            }

        }
        for(int i = 0 ; i < a ; i++){
            nums[i]=0;
        }
        for(int i = a ; i < a+b ; i++){
            nums[i]=1;
        }
        for(int i = a+b ; i < a+b+c ; i++){
            nums[i]=2;
        }

        
    }
};

//optimal solution 



class Solution {
public:
    void sortColors(vector<int>& nums) {
        int low = 0 , mid = 0 , high = nums.size()-1;
        while(mid<=high){
            if(nums[mid] == 0){
                swap(nums[low],nums[mid]);
                low++;
                mid++;
            }
            else if(nums[mid] ==1){
                mid++;
            }
            else{
                swap(nums[high],nums[mid]);
                high--;
            }

        }
        
    }
};


