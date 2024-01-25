// ******** Given an integer n, your task is to complete the function convertToRoman which prints the corresponding roman number of n. Various symbols and their values are given below. I ==> 1, V ==> 5, X ==> 10, L ==> 50, C ==> 100, D ==> 500, M ==> 1000 ********
// Note --> There are a few exceptions for some numbers like 4 in roman is IV,9 in roman is IX, similarly, 40 is XL while 90 is XC. Similarly, 400 is CD while 900 is CM

// <======== Example ========>
// Input: n = 5
// Output: V

// Input: n = 3
// Output: III


// Expected Time Complexity ==> O(log10N)
// Expected Auxiliary Space ==> O(log10N * 10)




class Solution{
  public:
    string convertToRoman(int n) {
         int arr[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
        unordered_map<int, string> mp;
        mp[1] = 'I';
        mp[4] = "IV";
        mp[9] = "IX";
        mp[5] = 'V';
        mp[10] = 'X';
        mp[40] = "XL";
        mp[50] = 'L';
        mp[90] = "XC";
        mp[100] = 'C';
        mp[400] = "CD";
        mp[500] = 'D';
        mp[900] = "CM";
        mp[1000] = 'M';
        
        string ans;
        for(int i = 0; i < 13; i++) {
            if(arr[i] <= n) {
                ans += mp[arr[i]];
                n -= arr[i];
                i--;
            }
        }
        
        return ans;
    }
};