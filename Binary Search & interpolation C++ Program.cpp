
#include<bits/stdc++.h>
using namespace std;
class Search
{

        int n,ar[10];

public:
    void getdata();
    void display();
    void Bin_operation();
    void interpol();
};

void Search :: getdata()
{
    cout<<"Enter no. of inputs : "<<endl;
    cin>>n;
    cout<<"Enter your neded value of array: "<<endl;
    for(int i=0; i<n; i++)
    {
        cin>>ar[i];
    }
    sort(ar,ar+n);
}

void Search :: display()

{
    for(int i=0; i<n; i++)
    {
        cout<<ar[i]<<"  ";
    }
}

void Search :: Bin_operation()
{
    int high,low,x,p=0;
    int mid;
    high = n-1;
    low=0;
    cout<<"Enter your searched value : "<<endl;
    cin>>x;
    //mid = (high+low)/2;
    while(low<=high)
    {
       mid=(high+low)/2;
        if(ar[mid]==x)
        {
            p++;
            cout<<"Searched value is found & position is : "<<mid+1;
            break;
        }
        else if(x<=ar[mid])
        {
            high = mid-1;
        }
        else if(x>=ar[mid])
        {
            low=mid+1;
        }

    }
    if(p==0)
        cout<<"Searched value is not found !"<<endl;
}


void Search::interpol()
{
    int ll=0;int hh=n-1;int mid;
    int x;
     cout<<endl<<"Enter your searched value  for interpolation: "<<endl;
    cin>>x;
    mid=ll+(hh-ll)*(x-ar[ll])/(ar[hh]-ar[ll]);
    ///cout<<"hh-ll="<<hh-ll<<"  "<<"arry[hh]-arry[ll]="<<arry[hh]-arry[ll]<<"  "<<"item-array[ll]="<<item-arry[ll]<<endl;
   ///cout<<"mid ="<<mid<<endl;
    int i=1;
    while(ar[mid]!=x)
    {
     //cout<<"in loop"<<endl;
       if(x<ar[mid])
       {
           ll=ll;
           hh=mid-1;
       }
       else
       {
           ll=mid+1;
           hh=hh;
       }
       i++;
    mid=ll+((hh-ll)/(ar[hh]-ar[ll]))*(x-ar[ll]);
    }
    cout<<"Index of item="<<mid+1<<endl;
    cout<<"Iteration="<<i<<endl;

}


int main()
{
    Search ob;
    ob.getdata();
    ob.display();
    ob.Bin_operation();
    ob.interpol();

    return 0;
}
