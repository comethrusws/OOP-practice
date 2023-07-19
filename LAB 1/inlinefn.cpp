#include<iostream>
using namespace std;

inline float cmtomet(float cm){
    return (cm/100);
}

int main(){
    float length;
    cout<<"Enter value in cm:";
    cin>>length;
    cout<<"Length in Metre is:"<<cmtomet(length)<<"m"<<endl;
    return 0;
}