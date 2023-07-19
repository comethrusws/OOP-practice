#include<iostream>
using namespace std;

int volume(int l, int b=5, int h=5){
    return(l*b*h);
}

int main(){
    cout<<"enter length"<<endl;
    int l;
    cin>>l;

    cout<<"enter breath:"<<endl;
    int b;
    cin>>b;

    cout<<"ENter height:"<<endl;
    int h;
    cin>>h;

    cout<<"volume is: "<<volume(l,b,h)<<endl;
    return 0;



}