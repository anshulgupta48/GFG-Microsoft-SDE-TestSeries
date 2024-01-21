// ******** Given a list of non negative integers, arrange them in such a manner that they form the largest number possible.The result is going to be very large, hence return the result in the form of a string. ********

// <======== Example ========>
// Input: N = 5, Arr[] = {3, 30, 34, 5, 9}
// Output: 9534330

// Input: N = 4, Arr[] = {54, 546, 548, 60}
// Output: 6054854654


// Expected Time Complexity ==> O(N*logN).
// Expected Auxiliary Space ==> O(N).




class Solution{
public:
    static bool cmp(string s1, string s2) {
        string a = s1 + s2;
	    string b = s2 + s1;
	    return a > b;
    }
    
    
	string printLargest(vector<string> &arr) {
	    sort(arr.begin(), arr.end(), cmp);
	    string ans = "";
	    
	    for(auto x: arr) {
	        ans += x;
	    }
	    
	    return ans;
	}
};