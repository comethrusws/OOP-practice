#include<iostream>
using namespace std;

namespace first{
    int i=5;
    int value(){return i;}
}
namespace second{
    float a=6.9;
    float value(){return a;}
}

int main(){
    cout<<"var from first:"<<first::i<<endl;
    cout<<"value from first:"<<first::value()<<endl;
    cout<<"var from sec:"<<second::a<<endl;
    cout<<"value from sec:"<<second::value()<<endl;
    return 0;



}
