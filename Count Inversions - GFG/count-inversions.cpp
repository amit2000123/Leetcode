//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
  public:
    // arr[]: Input Array
    // N : Size of the Array arr[]
    // Function to count inversions in the array.
    long long cnt = 0;
    void merge(long long arr[] , long long low , long long mid , long long high){
        vector<long long> temp;
        long long left = low;
        long long right = mid + 1;
        while(left <= mid && right <= high){
            if(arr[left] <= arr[right]){
                temp.push_back(arr[left]);
                left++;    
            }
            else{
                temp.push_back(arr[right]);
                cnt += (mid-left+1);
                right++;
            }
            
        }
        while(left <= mid){
            temp.push_back(arr[left]);
            left++;    
        }
        while(right <= high){
            temp.push_back(arr[right]);
            right++;
        }
        
        for(long long i=low;i<=high;i++){
            arr[i] = temp[i-low];
        }
        
    }
    
    void mergeSort(long long arr[] , long long low , long long high){
        if(low >= high) return;
        long long mid = (low+high)/2;
        mergeSort(arr , low , mid);
        mergeSort(arr , mid+1 , high);
        merge(arr , low , mid , high);
    }
    long long int inversionCount(long long arr[], long long n)
    {
        mergeSort(arr,0,n-1);
        return cnt;
    }

};

//{ Driver Code Starts.

int main() {
    
    long long T;
    cin >> T;
    
    while(T--){
        long long N;
        cin >> N;
        
        long long A[N];
        for(long long i = 0;i<N;i++){
            cin >> A[i];
        }
        Solution obj;
        cout << obj.inversionCount(A,N) << endl;
    }
    
    return 0;
}

// } Driver Code Ends