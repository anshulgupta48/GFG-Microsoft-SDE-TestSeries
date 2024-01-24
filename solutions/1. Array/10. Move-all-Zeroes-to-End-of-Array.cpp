// ******** Given an array arr[] of n positive integers. Push all the zeros of the given array to the right end of the array while maintaining the order of non-zero elements. Do the mentioned change in the array in-place. ********

// <======== Example ========>
// Input: N = 5, Arr[] = {3, 5, 0, 0, 4}
// Output: 3 5 4 0 0

// Input: N = 4, Arr[] = {0, 0, 0, 4}
// Output: 4 0 0 0


// Expected Time Complexity ==> O(n)
// Expected Auxiliary Space ==> O(1)




class Solution{
public:
	void pushZerosToEnd(int arr[], int n) {
	    int i = 0;
	    for(int j = 0; j < n; j++) {
	        if(arr[j] != 0) {
	            swap(arr[i], arr[j]);
	            i++;
	        }
	    }
	}
};