#include<iostream>
#define pi 3.1415
using namespace std;

int main(){
    int radius;
    float area;
    float circ;
    cout<<"Enter the radius for the circle: ";
    cin>>radius;

    //area
    area=pi*radius*radius;
    circ=2*pi*radius;

    cout<<"Area is: "<<area<<endl;
    cout<<"Circumferebnce is:"<<circ<<endl;
    return 0;

}
