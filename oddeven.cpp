#include <iostream>
using namespace std;
int main(){
    int a, b, c ;
    cout<<" enter the value of a : "; 
    cin>> a;
    cout<<" enter the value of b : ";
    cin>> b;
    cout<<" enter the value of c : ";
    cin>> c;

    if(a > b && a > c){
        cout<<" a is greater no.";
    }else if(b > a && b > c){
        cout<<" b is greater no.";
    }else{
        cout<<" c is greater no.";
    }
    
return 0;    

}
    

    