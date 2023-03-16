vector<long long> printFirstNegativeInteger(long long int A[],long long int N, long long int K) {
                vector<long long>ans;// queue is to store negative  numbers
                queue<long long>q;
                int start=0;
                for(int end=0;end<N;end++){
//store in queue if encounter neg num
                 if(A[end]<0)q.push(A[end]);
                 if(end-start+1==K){
                     if(q.empty())ans.push_back(0);
                     else{ans.push_back(q.front());
                     // if start reached our negative num
                     // we need to pop it for next iteration
                     if(A[start]==q.front())q.pop();
                }
//to maintain size of window
start++;
}
}
return ans;
}

https://practice.geeksforgeeks.org/problems/first-negative-integer-in-every-window-of-size-k3345/1
