#include <iostream>

using namespace std;

int main()
{
    int l,w;
    int area;
    cout<<"Enter the l & w of the board between 1&16"<<endl;
    cin>>l>>w;
    if(l>=1 & l <=16 & w>=1 & w <=16){
     area = l*w;
     if(area%2==0){
        cout<< area/2;
     }
     else{
        cout<<(area-1)/2;
     }
    }

    return 0;
}
