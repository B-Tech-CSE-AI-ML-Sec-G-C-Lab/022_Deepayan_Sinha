// an online store wants to create products with ID, name , price for creating similar prodcuts variants, it wants  to copy an existing product and just change the price  a) Create class product with both constructors b) DIsplay the ID,name and prie of the copied object before and after changing the price. //

#include <iostream>
using namespace std;

class Product 
{
private:
    int id;
    string name;
    float price;
public:
    Product(int i,string n,float p)
    {
        id=i;
        name=n;
        price=p;       
    }    
    Product(const Product &p)  
    {
        id=p.id;
        name=p.name;
        price=p.price;
    }
    void changePrice(float newPrice)
    {
        price=newPrice;
    }
    void display()
    {
        cout<<"Product ID: "<<id<<endl;
        cout<<"Product name: "<<name<<endl;
        cout<<"price: "<<price<<endl;
    }
};
int main()
{
    Product p1(101,"Laptop",5000);
    Product p2(p1);

    cout<<"Copied Product before changing price: "<<endl;

    p2.display();
    p2.changePrice(6000);

    cout<<"\nCopied Product After Changing Price: "<<endl;
    p2.display();

    return 0;
}