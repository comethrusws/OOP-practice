#include<iostream>
using namespace std;

int main(){
    int i=68;

    int preInc= ++i;
    cout<<"Pre-increment value:"<<preInc<<endl;

    i=68;
    int posInc=i++;
    cout<<"Post-Increment value:"<<posInc<<endl;
    cout<<"updated i:"<<i<<endl;
    return 0;
}