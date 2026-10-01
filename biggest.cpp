#include <iostream>
using namespace std;
int main(){
    int a, b ,c  ;
    
    cout<< " enter the value of a, b, c "<< endl;
    cin>> a>> b >>c ;

    if( a > b)
    {
        if( a > c)
        {
            cout<<" a is biggest ";
        }
        else
        {
        cout<<" c is biggest";
        }
    }
    else
    {
        if( b > c)
        {
            cout<<" b is biggest ";
        }
        else
        {
            cout<<" c is biggest ";
        }

    }

return 0;

}

    

 