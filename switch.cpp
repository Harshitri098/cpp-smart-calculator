#include<iostream>
#include<cmath>
#include<string>
using namespace std;

int main(){
    int num1 ,num2 ;
    char operation ;
    
    cout<<" enter the value of num1 " <<endl;
    cin>> num1;

   
    cout<<" enter the value of num2 " <<endl;
    cin>> num2;

    cout<<" enter the operation ( + , - , * , / ,) "<<endl;
    cin>> operation;

    
    switch (operation){
        case '+':
            cout<< "you got : " << num1 + num2 << endl;
            break;

        case '-':
            cout<< "you got : " << num1 - num2 << endl;
            break;
        
        case '*':
            cout<< " you got : "<< num1 * num2 << endl;
            break;

        case '/':
            cout<< " you got : "<< num1 / num2 << endl;  
            break;

        default:
            cout<< " you enter the wrong value" << endl;


    }
return 0;

}