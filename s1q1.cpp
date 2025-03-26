#include<iostream>
using namespace std;
class Cylinder{
    float radius;
    float height;
public:
    void setradius(){
        cout<<"Entert the radius: ";
        cin>>radius;
    }
    void setheight(){
        cout<<"Entert the height: ";
        cin>>height;
    }
    float volume(){
        return 3.14*(radius*radius)*height;
    }
};
int main(){
    Cylinder C1;
    C1.setradius();
    C1.setheight();
    cout<<C1.volume()<<endl;
    return 0;
}