#include<bits/stdc++.h>
using namespace std;
bool isvalid(int a[],int n,int p,int mid)
{

int parata=0;
for(int i=0;i<n;i++)
{
    int time=0;
    int next_time=a[i];
    while(time+next_time<=mid)
    {
        parata++;
        time+=next_time;
        next_time+=a[i];
        if(parata>=p)
        return true;
    }
    
}
 return false;


}
int main()
{

int t;
cin>>t;
while(t--)
{
int p,n;
cin>>p;
cin>>n;
int a[n];
for(int i=0;i<n;i++) cin>>a[i];
sort(a,a+n);
int start=0,res=-1;
int end=a[n-1]*(p*(p+1))/2;
while(start<=end)
{
int mid=start+(end-start)/2;
if(isvalid(a,n,p,mid))
{
    res=mid;
    end=mid-1;
}
else start=mid+1;


}
cout<<res<<endl;

}
return 0;
}