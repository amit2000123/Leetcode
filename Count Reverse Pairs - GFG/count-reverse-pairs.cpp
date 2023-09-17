//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int cnt = 0;
    
    void countPairs(vector<int> &arr , int low , int mid , int high){
        int right = mid + 1;
        for(int i=low;i<=mid;i++){
            while(right <= high && arr[i] > 2 * arr[right]) right++;
            cnt += right -(mid + 1);
        }
    }
    
    void mergeSort(vector<int> &arr , int low , int high){
        if(low >= high) return;
        int mid = (low + high) /2;
        mergeSort(arr,low,mid);
        mergeSort(arr,mid+1,high);
        countPairs(arr,low,mid,high);
        merge(arr,low,mid,high);
    }
    
    void merge(vector<int> &arr ,int low , int mid , int high){
        vector<int> temp;
        int left = low , right = mid + 1;
        while(left <= mid && right <= high){
            if(arr[left] <= arr[right]){
                temp.push_back(arr[left]);
                left++;
            }
            else{
                temp.push_back(arr[right]);
                right++;
            }
        }
        
        while(left <= mid) temp.push_back(arr[left++]);
        while(right <= high) temp.push_back(arr[right++]);
        
        for(int i=low;i<=high;i++){
            arr[i] = temp[i - low];
        }
    }
    
    int countRevPairs(int n, vector<int> arr) {
        mergeSort(arr, 0 , n-1);
        return cnt;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr;

        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            arr.push_back(x);
        }

        Solution obj;
        cout << obj.countRevPairs(n, arr) << endl;
    }
    return 0;
}
// } Driver Code Ends