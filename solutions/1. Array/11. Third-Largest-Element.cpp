// ******** Given an array of distinct elements. Find the third largest element in it. Suppose you have A[] = {1, 2, 3, 4, 5, 6, 7}, its output will be 5 because it is the 3 largest element in the array A. ********

// <======== Example ========>
// Input: N = 5, A[] = {2,4,1,3,5}
// Output: 3

// Input: N = 2, A[] = {10,2}
// Output: -1


// Expected Time Complexity ==> O(N)
// Expected Auxiliary Space ==> O(1)




class Solution{
  public:
    int thirdLargest(int a[], int n) {
        sort(a, a+n);
        if(n-3 >= 0) {
            return a[n-3];
        }
        
        return -1;
    }
};