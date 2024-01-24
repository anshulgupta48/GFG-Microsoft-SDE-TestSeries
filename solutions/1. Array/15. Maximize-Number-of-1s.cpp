// ******** Given a binary array arr of size N and an integer M. Find the maximum number of consecutive 1's produced by flipping at most M 0's. ********

// <======== Example ========>
// Input: N = 3, arr[] = {1, 0, 1}, M = 1
// Output: 3

// Input: N = 11, arr[] = {1, 0, 0, 1, 1, 0, 1, 0, 1, 1, 1}, M = 2
// Output: 8


// Expected Time Complexity ==> O(N)
// Expected Auxiliary Space ==> O(1)




class Solution{
public:
    int findZeroes(int arr[], int n, int m) {
        int start = 0;
        int zeroCount = 0;
        int maxConsecutiveOne = 0;
        
        for(int end = 0; end < n; end++) {
            if(arr[end] == 0) {
                zeroCount++;
            }
            
            while(zeroCount > m) {
                if(arr[start] == 0) {
                    zeroCount--;
                }
                
                start++;
            }
            
            maxConsecutiveOne = max(maxConsecutiveOne, end-start+1);
        }
        
        return maxConsecutiveOne;
    }  
};