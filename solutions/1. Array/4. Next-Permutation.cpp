// ******** Implement the next permutation, which rearranges the list of numbers into Lexicographically next greater permutation of list of numbers. If such arrangement is not possible, it must be rearranged to the lowest possible order i.e. sorted in an ascending order. You are given an list of numbers arr[ ] of size N. ********

// <======== Example ========>
// Input: N = 6, arr = {1, 2, 3, 6, 5, 4}
// Output: {1, 2, 4, 3, 5, 6}

// Input: N = 3, arr = {3, 2, 1}
// Output: {1, 2, 3}


// Expected Time Complexity ==> O(N).
// Expected Auxiliary Space ==> O(1).




class Solution{
public:
    vector<int> nextPermutation(int N, vector<int> arr){
        int k = -1;
        for(int i = N-2; i >= 0; i--) {
            if(arr[i] < arr[i+1]) {
                k = i;
                break;
            }
        }
        
        if(k == -1) {
            reverse(arr.begin(), arr.end());
            return arr;
        }
        
        for(int i = N-1; i >= 0; i--) {
            if(arr[i] > arr[k]) {
                swap(arr[i], arr[k]);
                break;
            }
        }
        
        reverse(arr.begin()+k+1, arr.end());
        return arr;
    }
};