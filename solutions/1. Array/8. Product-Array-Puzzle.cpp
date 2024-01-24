// ******** Given an array nums[] of size n, construct a Product Array P (of same size n) such that P[i] is equal to the product of all the elements of nums except nums[i]. ********

// <======== Example ========>
// Input: n = 5, nums[] = {10, 3, 5, 6, 2}
// Output: 180 600 360 300 900

// Input: n = 2, nums[] = {12,0}
// Output: 0 12


// Expected Time Complexity ==> O(n)
// Expected Auxiliary Space ==> O(n)




class Solution{
  public:
    vector<long long int> productExceptSelf(vector<long long int>& nums, int n) {
        long long int leftProduct = 1;
        long long int rightProduct = 1;
        vector<long long int> ans(n);
        
        for(int i = 0; i < n; i++) {
            ans[i] = leftProduct;
            leftProduct *= nums[i];
        }
        
        for(int i = n-1; i >= 0; i--) {
            ans[i] = ans[i] * rightProduct;
            rightProduct *= nums[i];
        }
        
        return ans;
    }
};