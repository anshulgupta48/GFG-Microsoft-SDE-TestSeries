// ******** Given an array arr[] of N non-negative integers representing the height of blocks. If width of each block is 1, compute how much water can be trapped between the blocks during the rainy season. ********

// <======== Example ========>
// Input: N = 6, arr[] = {3,0,0,2,0,4}
// Output: 10

// Input: N = 4, arr[] = {7,4,0,9}
// Output: 10

// Input: N = 3, arr[] = {6,9,9}
// Output: 0


// Expected Time Complexity ==> O(N)
// Expected Auxiliary Space ==> O(N)




class Solution{
    public:
    long long trappingWater(int arr[], int n){
        int left[n], right[n];
        left[0] = arr[0];
        right[n-1] = arr[n-1];
        long long ans = 0;
        
        for(int i = 1; i < n; i++) {
            left[i] = max(left[i-1], arr[i]);
        }
        
        for(int i = n-2; i >= 0; i--) {
            right[i] = max(right[i+1], arr[i]);
        }
        
        for(int i = 0; i < n; i++) {
            ans += min(left[i], right[i]) - arr[i];
        }
        
        return ans;
    }
};