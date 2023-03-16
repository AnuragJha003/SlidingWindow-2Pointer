class Solution{   
public:
    long maximumSumSubarray(int K, vector<int> &Arr , int N){
        // code here 
        long i=0,j=0;
        long n=Arr.size();
        long sum=0,mx=0;
        while(j<n){
            sum=sum+Arr[j];
            if(j-i+1==K){
                mx=max(mx,sum);
                j++;
                //sum=sum-Arr[i];
                //i++;
            }
           if(j-i+1<K){
                j++;
            }
            else{
                while(j-i+1>K){
                    sum=sum-Arr[i];
                    i++;
                }
                //j++;
            }
        }
        return mx;
    }
};
https://practice.geeksforgeeks.org/problems/max-sum-subarray-of-size-k5313/1
