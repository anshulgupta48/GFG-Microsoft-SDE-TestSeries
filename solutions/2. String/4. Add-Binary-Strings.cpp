// ******** Given two binary strings A and B consisting of only 0s and 1s. Find the resultant string after adding the two Binary Strings. ********
// Note --> The input strings may contain leading zeros but the output string should not have any leading zeros.

// <======== Example ========>
// Input: A = "1101", B = "111"
// Output: 10100

// Input: A = "10", B = "01"
// Output: 11


// Expected Time Complexity ==> O(max(|A|, |B|)).
// Expected Auxiliary Space ==> O(max(|A|, |B|)) (for output string).




class Solution{
public:	
	string addBinary(string A, string B) {
	    int carry = 0;
	    reverse(A.begin(), A.end());
	    reverse(B.begin(), B.end());
	    
	    int n = A.length();
	    int m = B.length();
	    int i = 0, j = 0;
	    string ans = "";
	    
	    while(i < n || j < m) {
	        int digit1 = 0;
	        int digit2 = 0;
	        if(i < n) {
	            digit1 = A[i] - '0';
	            i++;
	        }
	        if(j < m) {
	            digit2 = B[j] - '0';
	            j++;
	        }
	        
	        int result = digit1 + digit2 + carry;
	        carry = result / 2;
	        result = result % 2;
	        ans.push_back(result + '0');
	    }
	    
	    if(carry == 1) {
	        ans.push_back(carry + '0');
	    }
	    else {
	        int i = ans.length() - 1;
	        while(i >= 1 && ans[i] == '0') {
	            ans.pop_back();
	            i--;
	        }
	    }
	    reverse(ans.begin(), ans.end());
	    return ans;
	}
};