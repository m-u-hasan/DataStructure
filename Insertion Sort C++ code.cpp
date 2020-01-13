#include<bits/stdc++.h>
using namespace std;
void showlist(double *arr,int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<"  " ;
    }
    cout<<endl;6
}
void insertion_sort(double *arr,int n)
{
    int i,j,key;
    for(i=1;i<n;i++)
    {
        key=arr[i];
        j=i-1;
        while(j>=0&&arr[j]>key)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }

}
int main()
{
    int n;
    cout<<"enter the value of range:";
    cin>>n;
    double arr[n];
    ifstream mfile;
    mfile.open("value.txt");
    for(int i=0;i<n;i++)
    {
        mfile>>arr[i];
    }
    cout<<endl<<"before sorting:";
    showlist(arr,n);
    insertion_sort(arr,n);
    cout<<"after sorting:"<<endl;
    showlist(arr,n);

    return 0;

}
