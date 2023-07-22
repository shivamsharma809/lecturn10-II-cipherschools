#include<iostream>
using namespace std;

void printHi()  // No parameters are required 
{
    cout<<"Hi"<<endl;
    return;
}
int sum(int a, int b)
{
    int c;

    c = a+b;
    a=500;

    return c;
}

//void swap(int a, int b)
 void swap(int &a, int &b)

     // By including the keyword & after the name of the data type and before the variable name we are able to change the actual parameters
{
    int c;

    c=a;
    a=b;
    b=c;

    cout<<" The value of a and b after swaping inside the function are: "<<a<<" "<<b<<endl;
     
     return;
}

int main()
{
    printHi(); // First calling the printHi function

    int a,b;

    a=4;
    b=6;

  swap(a,b);
    
     cout<<" The value of a and b after swaping outside the function are: "<<a<<" "<<b;

    return 0;


}
