#include<iostream>
using namespace std;

float change(float &x){
    float far;
    far= (x* 9/5)+32;
    cout<<"Temp In fahrenheit:"<<far<<endl;
    return 0;
    
}

int main(){
    float temperature;
    cout<<"enter temperature in celcius:";
    cin>>temperature;
    change(temperature);

    return 0;

}