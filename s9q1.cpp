#include<iostream>
using namespace std;

class Item{
    int itemCode;
    string itemName;
    float itemPrice;
public:
    void accept(){
        cout<<"Enter the following info: "<<endl;
        cout<<"\nItem Code: ";
        cin>>itemCode;
        cout<<"\nItem Name: ";
        cin>>itemName;
        cout<<"\nItem Price: ";
        cin>>itemPrice;
    }

    void display(){
        cout<<"Items Information: "<<endl;
        cout<<"Item Code: "<<itemCode<<endl;
        cout<<"Item Name: "<<itemName<<endl;
        cout<<"Item Price: "<<itemPrice;
    }
    
};

int main(){
    Item i;
    i.accept();
    i.display();
    return 0;
}