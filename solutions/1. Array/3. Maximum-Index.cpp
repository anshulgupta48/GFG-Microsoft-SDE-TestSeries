// ******** Given an array A[] of N positive integers. The task is to find the maximum of j - i subjected to the constraint of A[i] < A[j] and i < j. ********

// <======== Example ========>
// Input: N = 2, A[] = {1, 10}
// Output: 1

// Input: N = 9, A[] = {34, 8, 10, 3, 2, 80, 30, 33, 1}
// Output: 6


// Expected Time Complexity ==> O(N).
// Expected Auxiliary Space ==> O(N).




class Solution{
    public:
    int maxIndexDiff(int A[], int N) {
        vector<int> prefixMin(N);
        prefixMin[0] = A[0];
        
        for(int i = 1; i < N; i++) {
            prefixMin[i] = min(prefixMin[i-1], A[i]);
        }
        
        int i = N-1, j = N-1, maxLen = INT_MIN;
        while(i >= 0 && j >= 0) {
            if(prefixMin[i] <= A[j]) {
                maxLen = max(maxLen, j-i);
                i--;
            }
            else {
                j--;
            }
        }
        
        return maxLen;
    }
};