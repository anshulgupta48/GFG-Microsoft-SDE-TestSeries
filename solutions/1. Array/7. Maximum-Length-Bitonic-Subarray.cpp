// ******** Given an array Arr[0 … N-1] containing N positive integers, a subarray Arr[i … j] is bitonic if there is a k with i <= k <= j such that A[i] <= Arr[i+1] <= ... <= Arr[k] >= Arr[k+1] >= ... A[j – 1] >= A[j]. Write a function that takes an array and array length as arguments and returns the length of the maximum length bitonic subarray. ********

// <======== Example ========>
// Input: N = 6, Arr[] = {12, 4, 78, 90, 45, 23}
// Output: 5

// Input: N = 4, Arr[] = {10, 20, 30, 40}
// Output: 4


// Expected Time Complexity ==> O(N)
// Expected Auxiliary Space ==> O(1)




class Solution{
public:
	int bitonic(vector<int> arr, int n) {
	    vector<int> left(n, 0);
	    vector<int> right(n, 0);
	    int maxLength = 0;
	    
	    for(int i = 1; i < n; i++) {
	        if(arr[i-1] <= arr[i]) {
	            left[i] = left[i-1] + 1;
	        }
	        else {
	            left[i] = 0;
	        }
	    }
	    
	    for(int i = n-2; i >= 0; i--) {
	        if(arr[i] >= arr[i+1]) {
	            right[i] = right[i+1] + 1;
	        }
	        else {
	            right[i] = 0;
	        }
	    }
	    
	    for(int i = 0; i < n; i++) {
	        maxLength = max(maxLength, left[i] + right[i]);
	    }
	    
	    return maxLength+1;
	}
};