// ******** Given a non-negative number represented as a list of digits, add 1 to the number (increment the number represented by the digits). The digits are stored such that the most significant digit is first element of array. ********

// <======== Example ========>
// Input: N = 3, arr[] = {1, 2, 4}
// Output: 1 2 5

// Input: N = 3, arr[] = {9,9,9}
// Output: 1 0 0 0


// Expected Time Complexity ==> O(N).
// Expected Auxiliary Space ==> O(1).




class Solution {
  public:
    vector<int> increment(vector<int> arr ,int N) {
        vector<int> ans;
        int sum = 0, carry = 1;
        reverse(arr.begin(), arr.end());
        
        for(int i = 0; i < N; i++) {
            sum = carry + arr[i];
            ans.push_back(sum % 10);
            carry = sum / 10;
        }
        
        if(carry) {
            ans.push_back(carry);
        }
        
        reverse(ans.begin(), ans.end());
        return ans;
    }
};