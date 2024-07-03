#include<iostream>
using namespace std;
int main()
{
int a[10],n,k,i,t,j,d,c=0,b[10];
cout<<"Enter the number of elements"<<endl;
cin>>n;
cout<<"Enter the array elements";
for(i=0;i<n;i++)
{
    cin>>a[i];
}
cout<<endl;
for(k=0;k<n;k++)
{
    if(a[k]%2!=0)
    {
        b[c]=a[k];
        c++;
        d=c;
    }
}
for(i=0;i<n;i++)
{
    if(a[i]%2==0)
    {
        b[d]=a[i];
        d++;
    }
}

for(i=0;i<c-1;i++)
{
    for(j=i+1;j<c;j++)
    {
        if(b[i]>b[j])
        {   t=b[i];
            b[i]=b[j];
            b[j]=t;    }
    }
}

for(i=c;i<n;i++)
{
    for(j=i+1;j<n;j++)
    {
        if(b[i]<b[j])
        {   t=b[i];
            b[i]=b[j];
            b[j]=t;  }
    }
}
for(i=0;i<n;i++)
{ cout<<b[i]<<endl; }
  
return 0;
}
