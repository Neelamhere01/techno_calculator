#include<iostream>
using namespace std;
int main(){
    double num1;
    double num2;
    cout<<"enter no. first :";
    cin>>num1;
    cout<<"enter no. second :";
    cin>>num2;
    cout<<"enter the operation: +,-,*,/  :";
    char opr;
    cin>>opr;
    int result;
    switch(opr) {
        case '+':
        result=num1+num2;
        cout<<num1<<"+"<<num2<<"=";
        break;

        case '-':
        result=num1-num2;
        cout<<num1<<"-"<<num2<<"=";
        break;
        case '*':
        result=num1*num2;
        cout<<num1<<"*"<<num2<<"=";
        break;

        case '/':
        result=num1/num2;
        cout<<num1<<"/"<<num2<<"=";
        break;
        default:
        cout<<"invalid operation";
        return 1;


    }
    cout<<result;
}        