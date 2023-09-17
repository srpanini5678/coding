//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
  public:
    int thirdLargest(int a[], int n)
    {
        //Your code here
        int x1=a[0];
        int x2,x3 = -1;
        for(int i=0; i<n; i++) {
            if(a[i]>x1) {
                x3=x2;
                x2=x1;
                x1=a[i];
            }
            else if(a[i]>x2 && x1>a[i]) {
                x3=x2;
                x2=a[i];
            }
            else if(a[i]>x3 && x1>a[i]) {
                x3=a[i];
            }
        }
        return x3;
    }

};

//{ Driver Code Starts.
 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	   Solution obj;
	    cout<<obj.thirdLargest(a,n)<<endl;
    }
}   
// } Driver Code Ends