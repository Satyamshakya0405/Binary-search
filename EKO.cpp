#include<bits/stdc++.h>
using namespace std;
bool isvalid(long long int a[],long long int n,long long int m,long long int mid)
{

long long int sum=0;
for(long long int i=0;i<n;i++)
{
    if(a[i]-mid>=0)
       sum+=(a[i]-mid);
       if(sum>=m)
       return true;

    
}
return false;


}
int main()
{

long long int n,m,start,end,res=-1;
scanf("%lld %lld",&n,&m);
long long int a[n];
for(long long int i=0;i<n;i++) scanf("%lld",&a[i]);
sort(a,a+n);
start=a[0];
end=a[n-1];
while(start<=end)
{
    long long int mid=start+(end-start)/2;

    if(isvalid(a,n,m,mid))
    {
        res=mid;
        start=mid+1;
    }
    else end=mid-1;
}

printf("%lld\n",res);

}