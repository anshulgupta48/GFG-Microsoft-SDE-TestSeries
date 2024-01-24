// ******** Given an array arr[] of N positive integers which can contain integers from 1 to P where elements can be repeated or can be absent from the array. Your task is to count the frequency of all numbers from 1 to N. Make in-place changes in arr[], such that arr[i] = frequency(i). Assume 1-based indexing. ********
// Note  --> The elements greater than N in the array can be ignored for counting and do modify the array in-place. 

// <======== Example ========>
// Input: N = 5, arr[] = {2, 3, 2, 3, 5}, P = 5
// Output: 0 2 2 0 1

// Input: N = 4, arr[] = {3,3,3,3}, P = 3
// Output: 0 0 4 0

// Input: N = 2, arr[] = {8,9}, P = 9
// Output: 0 0


// Expected Time Complexity ==> O(N)
// Expected Auxiliary Space ==> O(1)




class Solution{
    public:
    void frequencyCount(vector<int>& arr,int N, int P) {
        vector<int> ans(P+1, 0);
        for(int i = 0; i < N; i++) {
            ans[arr[i]]++;
        }
        
        for(int i = 0; i < N; i++) {
            if(i+1 <= P) {
                arr[i] = ans[i+1];
            }
            else {
                arr[i] = 0;
            }
        }
    }
};