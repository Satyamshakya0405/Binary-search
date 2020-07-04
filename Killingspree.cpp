#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;
int main()
{
int t;
cin>>t;
while(t--)
{
    ll p,start=1,end,res=-1;
    cin>>p;
    end=1000000000000000;
    while(start<=end)
    {
        ll mid=start+(end-start)/2;
        ll sum=(mid*(mid+1)*(2*mid+1))/6;
        if(sum<=p)
        {
            res=mid;
            start=mid+1;
        }
        else
        end=mid-1;


    }
    cout<<res<<endl;

}

return 0;
}