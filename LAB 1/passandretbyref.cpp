#include<iostream>
using namespace std;
int j=5, k=7;
int &setx();

void swap(int &x, int &y){
    int temp;
    temp=x;
    x=y;
    y=temp;
}

int main(){
    cout<<"Passing by reference:";
    int a=5, b=16;
    cout<<"before swapping: a="<<a<<" and b="<<b<<endl;
    swap(a,b);
    cout<<"after swap:";
    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;

    cout<<"-------------------------------------"<<endl;
    cout<<"Return by reference:";

    setx()=k;
    cout<<"from Main, j="<<j<<endl;

    return 0;

}

int &setx(){
    cout<<"from function, j="<<j<<endl;
    return j;
}