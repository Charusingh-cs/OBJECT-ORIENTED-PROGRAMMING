#include <iostream>
using namespace std;
int area(int side){
    return side*side;
}
int area(int l,int b){
    return l*b;
}
int simpleinterst(int p,int t,int interst=10){


    return  p*interst*t;
}
int main(){
    cout<<area(9)<<endl;
    cout<<area(2,7)<<endl;
    cout<<simpleinterst(30,90);
    return 0;

}