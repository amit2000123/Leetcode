//{ Driver Code Starts
#include <iostream>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    // Function to find equilibrium point in the array.
    // a: input array
    // n: size of array
    int equilibriumPoint(long long a[], int n) {
    
        // int l = 0 , lsum = 0 , r = n-1 , rsum = 0;
        // while(l < r && lsum != rsum){
        //     if(l == 0 && r == n-1 ){
        //         if(a[l] < a[r]){
        //             lsum += a[l];
        //             l++;
        //         }
        //         else{
        //             rsum += a[r];
        //             r--;
        //         }
        //     }
            
        //     if(lsum  < rsum){
        //         lsum += a[l];
        //         l++;
        //     }
        //     else if(lsum  > rsum){
        //         rsum += a[r];
        //         r--;
        //     }
        //     else{
        //         if( l == r){
        //             return l+1;
        //         }
                
        //     }
        // }
        // return -1;
        
        
        if(n == 1) return 1;
        long long lsum = 0;
        long long totalsum = 0;
        for(int i=0;i<n;i++) totalsum += a[i];
        // cout<< totalsum<<endl;
        
        for(int i=1;i<n;i++){
            lsum += a[i-1];
            long long rsum = totalsum - lsum - a[i] ;
            if(lsum == rsum ) return i+1;
        }
        return -1;
    }

};

//{ Driver Code Starts.


int main() {

    long long t;
    
    //taking testcases
    cin >> t;

    while (t--) {
        long long n;
        
        //taking input n
        cin >> n;
        long long a[n];

        //adding elements to the array
        for (long long i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        Solution ob;

        //calling equilibriumPoint() function
        cout << ob.equilibriumPoint(a, n) << endl;
    }
    return 0;
}

// } Driver Code Ends