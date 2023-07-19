#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

int main(){
    string name1="Ram";
    string add1="Patan";
    string name2="Shyam";
    string add2="Koteshwor";
    
    cout<<left<<setw(15)<<"Name"<<"Address"<<endl;
        cout<<left<<setw(15)<<name1<<add1<<endl;
        cout<<left<<setw(15)<<name2<<add2<<endl;

    return 0;


}