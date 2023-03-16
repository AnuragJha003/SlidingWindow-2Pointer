lass Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int i=0;int j=0;int n=nums.size();
        vector<int> ans;
        list<int> l;//stores index of elmmnt front m larger elmnt index comes 
        int mx=INT_MIN;
        while(j<n){
            if(j-i+1<k){//if small size
                if(l.size()==0)l.push_back(j);//empty h then pb the index j 
                else{
                    while(l.size()>0 && nums[l.back()]<nums[j])l.pop_back();//if smaller elmnt index is present at the end of the list keep poping from the back 
                l.push_back(j);//and at end push index j into list when done so 
                }
            }
            else{
                while(l.size()>0 && nums[l.back()]<nums[j])l.pop_back();//same thing smaller elmnt index is present at the end of the list keep popping from the back 
                l.push_back(j);//push the jth index which might increase the window size of k 
                while(j-i+1>k){//when it is more than 
                    if(l.size()>0 && l.front()==i)l.pop_front();//if the front of list is equal to i that is the max elmnt index of the k sized window subarray is present at the ith index pop from the front
                    i++;//else if it is not max increment the ith index as it is sliding of window 
                }
                if(j-i+1==k){//now when size equal then push back the max elmnt in the answer ans 
                    ans.push_back(nums[l.front()]);
                }
            }
            j++;//increment j everytime gg
        }
        return ans;
    }
};
https://leetcode.com/problems/sliding-window-maximum/
