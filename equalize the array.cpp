#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    int arr[101]={0};
    for(int i=0;i<n;i++)
        arr[a[i]]++;
    int maxf=arr[0];
    for(int i=0;i<101;i++)
   { if(arr[i]>maxf)
        {
            maxf=arr[i];

        }
    }
    int min;
    min=n-maxf;
    cout<<min;
    return 0;

}
