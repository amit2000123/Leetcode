//{ Driver Code Starts
// An efficient C++ program to compute 
// sum of bitwise OR of all pairs
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution{
    public:
    // Returns sum of bitwise OR
    // of all pairs
    long long int sumXOR(int arr[], int n)
    {
    // 	long long sum = 0;
    // 	for(int i=0;i<n;i++){
    // 	    for(int j = i+1;j<n;j++){
    // 	        sum += (arr[i] ^ arr[j]);
    // 	    }
    // 	}
    // 	return sum;
        long long sum = 0;
        for(int i=0;i<32;i++){
            long long c0 = 0, c1 = 0;
            for(int j=0;j<n;j++){
                int bit = arr[j] & 1;
                if(bit == 0) c0++;
                else c1++;
                arr[j] /= 2;
            }
            
            sum += ((c0 * c1) * (1 << i));
        }
        return sum;
    
    }
};

//{ Driver Code Starts.


int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	 int n ;
	 cin>>n;
	 int arr[n+1];
	 for( int i=0;i<n;i++)
	    cin>>arr[i];
	 Solution ob;
	 cout<<ob.sumXOR(arr, n)<<endl;
	}	
	return 0;
}

// } Driver Code Ends