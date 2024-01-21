// ******** Given an unsorted array Arr of size N. Find the subarray Arr[s...e] such that sorting this subarray makes the whole array sorted. ********

// <======== Example ========>
// Input: N = 11, Arr[] ={10,12,20,30,25,40,32,31,35,50,60}
// Output: 3 8

// Input: N = 9, Arr[] = {0, 1, 15, 25, 6, 7, 30, 40, 50}
// Output: 2 5


// Expected Time Complexity ==> O(N).
// Expected Auxiliary Space ==> O(1).




class Solution{
public:	
	vector<int> printUnsorted(int arr[], int n) {
	    if(n == 1) {
	        return {0, 0};
	    }
	    
	    vector<int> ans;
	    for(int i = 0; i < n; i++) {
	        ans.push_back(arr[i]);
	    }
	    
	    sort(ans.begin(), ans.end());
	    int i = 0, j = n-1;
	    while(ans[i] == arr[i]) {
	        i++;
	    }
	    while(ans[j] == arr[j]) {
	        j--;
	    }
	    
	    return {i, j};
	}
};