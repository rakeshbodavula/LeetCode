// problem link: https://leetcode.com/problems/intersection-of-two-arrays-ii/



//  1)Binary Search:

class Solution {
public:
    int binsearch(vector<int>a,int key){    // Binary Search Algorithm
        int l=0,u=a.size()-1,mid;
        while(l<=u){
            mid=l+(u-l)/2;
            if(a[mid]==key) return mid;
            else if(a[mid]>key) u=mid-1;
            else l=mid+1;
        }
        return -1;
    }
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
	
	// if nums1 is larger than nums2 then swap
        if(nums1.size()>nums2.size()) return intersect(nums2,nums1);
		
        vector<int>arr;
        sort(nums2.begin(),nums2.end());  // sort the larger vector for binaryu search
        for(auto i:nums1){
            int index=binsearch(nums2,i);
            if(index>=0){
                arr.push_back(i);
                nums2.erase(nums2.begin()+index);  // delete the pushed element
            }
        }
        return arr;
    }
};


//      2)Two-Pointer:
class Solution {
public:
    
    // two-pointer and sorting
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int>arr;
        int m=nums1.size(),n=nums2.size(),i=0,j=0;
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        while(i<m && j<n){
            if(nums1[i]==nums2[j]){   // if both elements in the vector are equal push and increment i and j
                arr.push_back(nums1[i]);
                i++,j++;
            }
            else if(nums1[i]<nums2[j]) i++;  // if nums1 element < nums2 element then increment i else j
            else j++;
        }
        return arr;
    }
};



//      3)Hashing:

class Solution {
public:
    
    // Hashing
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int>arr;
        map<int,int>mp;
        if(nums1.size()>nums2.size()){
            vector<int>tmp=nums1;
            nums1=nums2;
            nums2=tmp;
        }
        for(int i:nums1) mp[i]++;
        for(int j:nums2){
            if(mp.find(j)!=mp.end() && mp[j]>0){
                arr.push_back(j);
                mp[j]--;
            }
        }
        return arr;
    }
};