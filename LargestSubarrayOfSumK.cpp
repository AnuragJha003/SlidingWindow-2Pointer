Given an array containing N positive integers and an integer K. Your task is to find the length of the longest Sub-Array with sum of the elements equal to the given value K.

int i=0;int j=0;
int n=arr.size();
while(j<n){
sum=sum+arr[j];
if(sum<k){
j++;
}
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
