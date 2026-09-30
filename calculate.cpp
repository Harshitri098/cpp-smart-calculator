#include <iostream>
#include <cmath>
#include <string>
using namespace std;
int main(){

string Operation;

string sum = "sum";
string minus = "minus";
string multiply = "multiply";
string divide = "divide";

double num1 , num2;

cout<<" select any operation ( sum , minus , multiply , divide ) " << endl;
cin>> Operation;

cout<<" enter the value of num1 " << endl;
cin>> num1 ;

cout<<" enter the value of num2 " << endl;
cin>> num2 ;

if ( sum == Operation ){
    
    cout<< " your value is " << num1 + num2 << endl;

}else if( minus == Operation ){
    cout<< " your value is " << num1 - num2 << endl;
    
}else if( multiply == Operation ){
    cout<< " your value is " << num1 * num2 << endl; 

}else if(divide == Operation ){

    if( num2 == 0){
        cout<<" cannot divide by 0! " << endl; 
    }else{
        cout<<" your value is " << num1 / num2 << endl;
    }

}else{
    cout<<" you have enter invalide operation! "<< endl;
}
return 0;
}
