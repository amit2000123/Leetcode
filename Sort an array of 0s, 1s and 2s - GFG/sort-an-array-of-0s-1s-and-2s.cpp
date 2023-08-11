//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends
class Solution
{
    public:
    // better Aprroach
    // void sort012(int a[], int n)
    // {
    //     int c0 = 0 ,c1=0, c2=0;
    //     for(int i=0;i<n;i++){
    //         if(a[i] == 0) c0++;
    //         else if(a[i] == 1) c1++;
    //         else c2++;
    //     }
    //     for(int i=0;i<c0;i++) a[i] = 0;
    //     for(int i=0;i<c1;i++) a[i+c0] = 1;
    //     for(int i=0;i<c2;i++) a[i+c0+c1] = 2;
        
    // }
    
    // Best optimal Approach
    
    void sort012(int a[], int n)
    {
        // 00000(low-1)   (low)11111(mid-1)  mid.......high   (high+1)22222(n-1)
        int low = 0 , mid = 0 , high = n-1;
        while(mid <= high){
            if(a[mid] == 0){
                swap( a[mid] , a[low] );
                low++;
                mid++;
            }
            else if(a[mid] == 1) mid++;
            else{
                swap(a[mid] , a[high]);
                high--;
            }
        }
    }
    
    
};

//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        Solution ob;
        ob.sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;
        
        
    }
    return 0;
}


// } Driver Code Ends