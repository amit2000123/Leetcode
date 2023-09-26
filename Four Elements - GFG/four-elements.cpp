//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

bool find4Numbers(int A[], int n, int X);

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, i, x;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        cin>>x;
        cout << find4Numbers(a, n, x) << endl;

    }
    return 0;
}
// } Driver Code Ends


//User function Template for C++

bool find4Numbers(int arr[], int n, int target)  
{
        // int n = arr.size();
        vector<vector<int>> ans;
        sort(arr,arr+n);
        for(int i=0;i<n;i++){
            if(i > 0 && arr[i] == arr[i-1]) continue;
            for(int j=i+1;j<n;j++){
                if(j > i+1 && arr[j] == arr[j-1]) continue;
                int k = j + 1;
                int l = n - 1;
                while(k < l){
                    long long sum = (long long)(arr[i] + arr[j] )+ (long long)(arr[k] + arr[l]);
                    if(sum < target){
                        k++;
                    }
                    else if(sum > target){
                        l--;
                    }
                    else{
                        return true;
                        // ans.push_back({arr[i] , arr[j] , arr[k] , arr[l]});
                        // k++;
                        // l--;
                        // while(k < l && arr[k] == arr[k-1]) k++;
                        // while(k < l && arr[l] == arr[l+1]) l--;
                    }
                }
            }
            
        }
        return false;
}