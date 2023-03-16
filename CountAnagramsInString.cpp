class Solution{
public:
int search(string pat, string txt) {

     // code here
     unordered_map<char, int>mp;
     for(char a : pat){

         mp[a]++;
     }
     int count = mp.size();
     int i=0,j=0;

     int n = txt.size();

     int k = pat.size();

     int ans = 0;
     while(j<n){

         if(mp.find(txt[j]) != mp.end()){

             mp[txt[j]]--;

             if(mp[txt[j]] == 0){

                 count--;

             }

         }
         if(j-i+1 < k){

             j++;

         }

         else if(j-i+1 == k){

             if(count == 0) ans++;

             

             if(mp.find(txt[i]) != mp.end()){

                 mp[txt[i]]++;

                 if(mp[txt[i]]==1){

                     count++;

                 }         

             }

             i++; j++;

         }
     }
     return ans;
 }

https://practice.geeksforgeeks.org/problems/count-occurences-of-anagrams5839/1



class Solution {
public:
    vector<int> findAnagrams(string txt, string pat) {
        
     unordered_map<char, int>mp;

     

     for(char a : pat){

         mp[a]++;

     }

     

     int count = mp.size();

     

     int i=0,j=0;

     int n = txt.size();

     int k = pat.size();

     //int ans = 0;
        vector<int> ans;
     

     while(j<n){

         if(mp.find(txt[j]) != mp.end()){

             mp[txt[j]]--;

             if(mp[txt[j]] == 0){

                 count--;

             }

         }

         

         if(j-i+1 < k){

             j++;

         }

         else if(j-i+1 == k){

             if(count == 0) ans.push_back(i);

             

             if(mp.find(txt[i]) != mp.end()){

                 mp[txt[i]]++;

                 if(mp[txt[i]] == 1){

                     count++;

                 }         

             }

             i++; j++;

         }

         

     }

     return ans;

    }
};

https://leetcode.com/problems/find-all-anagrams-in-a-string/
