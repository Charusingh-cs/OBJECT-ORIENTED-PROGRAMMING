#include <iostream>
using namespace std;
void swap(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
}
void swapc(int a,int b){
    int temp=a;
    a=b;
    b=a;
    b=temp;
}
int main(){
    int a;
    cin>>a;
    int b;
    cin>>b;
    swap(a,b);
    cout<<a;
    cout<<b;
    swapc(a,b);
    cout<<a;
    cout<<b;
    return 0;
}