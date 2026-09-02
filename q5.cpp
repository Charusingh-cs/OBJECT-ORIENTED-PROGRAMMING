#include <iostream>
using namespace std;
class product{
    private:
    string productname;
    float price;
    public:
    void input(){
        cin>>productname;
        cin>>price;
    }
    void display(){
        cout<<productname<<endl;
        cout<<price<<endl;
    }
    friend product higherPrice(product p1, product p2);
};

product higherPrice(product p1,product p2)
{
    if (p1.price > p2.price)
        return p1;
    else
        return p2;
}
int main()
{
    product p1, p2, higherProduct;
    cout<<"Enter details of Product 1:"<< endl;
    p1.input();
    cout << "\nEnter details of Product 2:"<<endl;
    p2.input();
    higherProduct = higherPrice(p1, p2);
    cout<<"\nProduct with Higher Price:"<<endl;
    higherProduct.display();
    return 0;
}