#include<iostream>
using namespace std;
int main(){
    int mx=-19999999;
    int arr[]={1,0,5,4,6,8};
    cout<<"Before "<<endl;
    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
    for(int i=0;i<6;i++){
        mx=max(mx,arr[i]);
        cout<<mx<<" ";
    }cout<<endl;
}
