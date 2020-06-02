#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t;
    cin>>n>>t;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    while(t)
    {
        int i,j;
        cin>>i>>j;
        int min=a[i];
        for(int x=i;x<=j;x++)
        {
            if(a[x]<min)
            min=a[x];

        }
        cout<<min<<endl;

        t--;
    }

 return 0;
}
