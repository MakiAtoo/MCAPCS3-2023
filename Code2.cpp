#include <iostream>

using namespace std;

int main()
{
    int num1, num2, num3;
    cout<<"Pls enter the value of number 1"<<endl;
    cin>>num1;
    cout<<"Pls enter the value of number 2"<<endl;
    cin>>num2;
    cout<<"Pls enter the value of number 3"<<endl;
    cin>>num3;
    if (num1>num2){
        if (num1>num3){
            if (num2>num3){
                cout<<"The smallest is num 3"<<endl;
                cout<<"The largest is num 1"<<endl;
            }
            else {
                cout<<"The smallest is num 2"<<endl;
                cout<<"The largest is num 1"<<endl;
            }
        }
        else {
            cout<<"The smallest is num 2"<<endl;
            cout<<"The largest is num 3"<<endl;
        }
    }
    else {
        if (num1>num3){
            cout<<"The smallest is num 3"<<endl;
            cout<<"The largest is num 2"<<endl;
        }
        else{
            cout<<"The smallest is num 1"<<endl;
            if(num2>num3){
                cout<<"The largest is num 2"<<endl;
            }
            else{
                cout<<"The largest is num 3"<<endl;
            }
        }
    }
}