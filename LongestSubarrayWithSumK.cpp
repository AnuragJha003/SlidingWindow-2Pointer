int i=0;int j=0;
int sum=0;int mx=0;
while(j<n){
sum=sum+arr[j];
if(sum<k)j++;
else if(sum==k){
mx=max(mx,j-i+1);
j++;
}
else{
while(sum>k){
sum=sum-arr[i];
i++;
}
}
}
return mx;
https://www.geeksforgeeks.org/longest-sub-array-sum-k/

//IF NEGATIVE NO IS PRESENT 
class Solution {
public:
    //VARIABLE SLIDING WINDOW WITH MAX SUM...
    int maxSubArray(vector<int>& nums) {
        int sum=0;int maxi=INT_MIN;
        for(auto it:nums){
            sum+=it;
            maxi=max(maxi,sum);
            if(sum<0){
                sum=0;
            }
        }
        return maxi;
        //KADANE'S ALGO BRUTE FROCE OF TWO LOOPS AND THREE LOOPS CA BE USED UT THIS IS THE BEST APPROACH IN HERE 
    }
};

https://leetcode.com/problems/maximum-subarray/
