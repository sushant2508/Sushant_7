class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) { 
        
        if(nums.size() == 1 && nums[0]==target) return {0,0};
        if(nums.size() == 1 && nums[0]!=target) return {-1,-1};
        vector<int> v;
        int flag=0;
        int l=0, r=nums.size()-1, mid;
        while(r>=l){
            mid = l + (r-l)/2;
            if(nums[mid]==target){
                flag =1;
                break;
              
            }
            if(nums[mid]<target){
                l = mid +1;
            }
            else r = mid -1;
        }
        if(flag == 0) return {-1, -1};
        else {
        auto it =lower_bound(nums.begin(), nums.end(), target) - nums.begin();
            v.push_back(it);
        auto a = upper_bound(nums.begin(), nums.end(), target) - nums.begin() -1;
        v.push_back(a);
        //     // first occurnce         
        //     l =0;
        //     r= nums.size()-1;
        //     while(r-1>1){
        //         mid = l + (r-l)/2;
        //         if(nums[mid]<target){
        //             l = mid +1;
        //         }
        //         else r = mid;
        //     }
        //     v.push_back(r);
        //     //last occrnce
        //     l =0;
        //     r= nums.size()-1;
        //     while(r-1>1){
        //         mid = l + (r-l)/2;
        //         if(nums[mid]<=target){
        //             l = mid;
        //         }
        //         else r = mid-1;
        //     }
        //     v.push_back(l);                  
        // }
        return v;    
        
    }
    }
};