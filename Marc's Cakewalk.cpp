#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    sort(a,a+n,greater<int>());
    long int sum=0;
    for(int i=0;i<n;i++)
    {
    sum=sum+(a[i]*pow(2,i));
    }
    cout<<sum;
    return 0;
}
