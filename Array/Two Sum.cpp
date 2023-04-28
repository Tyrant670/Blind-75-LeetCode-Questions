// Best Solution 
// TC-O(N)
// SC-O(N)


// First Solution
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            if(mp.find(target-nums[i])==mp.end()){
                mp[nums[i]]=i;
            }
            else{
                return {mp[target-nums[i]],i};
            }
        }
        return {-1,-1};
    }
};


// Second Solution
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> m;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        int j,index;
        for(int i=0;i<nums.size();i++){
            // if(target<=nums[i]){
                int x=target-nums[i];
                if(x==nums[i]){
                    if(m[x]>=2){
                        j=nums[i];
                        index=i;
                        break;
                    }
                }
                else if(m[x]){
                    j=nums[i];
                    index=i;
                    break;
                }
            // }
        }
        vector<int> ans;
        ans.push_back(index);
        int tofind=target-j;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==tofind && i!=index) {
                ans.push_back(i);
                break;
            }
        }
        return ans;
    }
};


// Third Solution
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        map<int,int> m;
        for(int i=0;i<n;i++){
            int t=target-nums[i];
            if(m.count(t)>0){
                return {m[t],i};
            }
            m[nums[i]]=i;
        }
        return {};
    }
};



// Brute Force
// O(N^2)

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i==j) continue;
                else {
                    if(nums[i]+nums[j]==target){
                        return {i,j};
                    }
                }
            }
            
        }
        return {};
    }
};

