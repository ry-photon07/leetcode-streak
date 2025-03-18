#include <iostream>

#include <unordered_set>

using namespace std;

class Solution {
    public:
        bool divideArray(vector<int>& nums) {
    
            // basic brute force appraoch
    
            // unordered_map<int,int> mp;
    
            // for(int i=0;i<nums.size();i++){
            //     mp[nums[i]]++;
            // }
    
            // for(auto it : mp){
            //     if(it.second%2!=0){
            //         return false;
            //     }
            // }
    
            // return true;
    
    
    
    
            //can also do by sorting ,if nums[i]==nums[i+1] doing a jump of 2 size
    
    
    
    
    
            // can also do by using set appraoch,getting an elemnt then puttting thr element in the if it alredy presnt then removing ig at end it set empty--->true
    
    
    
    
    
            unordered_set<int> s;
    
            for(int i=0;i<nums.size();i++){
                if(s.count(nums[i])){
                    s.erase(nums[i]);
                }
                else{
                    s.insert(nums[i]);
                }
            }
    
            return s.size()==0;
    
    
    
    
            // cannot do this while using xor as as 1,2,4,7 have xor zero
    
            
    
    
            
        }
    };

