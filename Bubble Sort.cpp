#include<iostream>

using namespace std;


int main(){
    int n,temp,c=0;
    cin >> n;
   int a[n];
    for(int i=0;i<n;i++)
        {
        cin>>a[i];
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
            {
            if(a[j]>a[j+1])
                {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                c++;
            }
        }
    
    if(c==0)
        {
        break;
    }}
    cout<<"Array is sorted in "<<c<<" swaps."<<endl;
    cout<<"First Element:"<<" "<<a[0]<<endl;
    cout<<"Last Element:"<<" "<<a[n-1]<<endl;
    return 0;
}

