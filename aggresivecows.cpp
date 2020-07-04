#include<bits/stdc++.h>
using namespace std;
bool isvalid(long long int a[],int n,int cows,int mid)
{
int start=0,c=1;
for(int i=1;i<n;i++)\
{
    if(a[i]-a[start]>=mid)
    {
        c++;
        start=i;
    }
    if(c==cows)
    return true;
}
// if(c<cows)
return false;

// return true;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,cows;
        cin>>n>>cows;
        long long int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        sort(a,a+n);
        if(n==2)
        cout<<a[n-1]-a[0]<<"\n";
        else{
        int start=0,res=-1;;
        int end=a[n-1]-a[0];
        while(start<=end)
        {
            int mid=start+(end-start)/2;
            if(isvalid(a,n,cows,mid))
            {
                res=mid;
                start=mid+1;
            }
            else
            {
                end=mid-1;
            }
            
        }
        cout<<res<<"\n";
        }
    }
    return 0;
}