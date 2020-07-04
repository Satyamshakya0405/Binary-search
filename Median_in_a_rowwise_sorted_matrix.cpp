#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{
    int r,c;
    cin>>r>>c;
    int m[r][c];
    for(int i=0;i<r;i++)
    for(int j=0;j<c;j++)
    {
        cin>>m[i][j];
    }
    int mn=INT_MAX,mx=INT_MIN;
    for(int i=0;i<r;i++)
    {
        if(m[i][0]<mn)
        mn=m[i][0];
        if(m[i][c-1]>mx)
        mx=m[i][c-1];
    }
    
    int key=(r*c+1)/2;
    while(mn<=mx)
    {
        int mid=mn+(mx-mn)/2;
        int count=0;
        for(int i=0;i<r;i++)
            count+=upper_bound(m[i],m[i]+c,mid)-m[i];
            if(count==key)
            {
                break;
            }
            else if(count<key)
                start=mid+1;
            else end=mid-1;
    }
    cout<<mid<<endl;
}

return 0;
}