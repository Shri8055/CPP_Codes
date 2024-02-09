#include<iostream>
using namespace std;
int main(){

    // How can you output “Physics” and “Wallah” in two different lines in C++?

    cout<<"Physics"<<endl;
    cout<<"Wallah"<<endl;

    // Print 10 using 2 positive numbers less than 6 in C++ as output.

    cout<<5+5<<endl;

    // What is the output of this program?

    int a=4,b=5;
    a++,b--;
    cout<< ++a << " " << b-- << endl;

    // // WAP to find the circumference of a circle with radius 10 in C++.

    float r,pi=3.1415;
    cout<<"Enter radious :  ";
    cin>>r;
    cout<<"Circumferance of circle is : "<<2*pi*r;

    // Multiply 2 numbers from user and find reminder by dividing.

    int x,y,z,m;
    cout << "Enter first number :  ";
    cin >> x; 
    cout << "Enter second number and value for taking modulus :  ";
    cin >> y >> m; 
    z = (x * y) % m;
    cout << "Output is: " << z;

    // User input 2 numbers and check x is not equal to y & x is greater than y.

    int x,y;
    cout<<"Enter 2 numbers :  ";
    cin>>x>>y;
    cout<<(x!=y)<<" "<<(x>=y);

    // Perform x += y , x -= y , x %= y.

    int x,y;
    cin>>x>>y;
    x+=y;
    x-=y;
    x%=y;
    cout<<x;
    
    // Volume of cylinder

    float r1,h,pi=3.1415;
    cout<<"Enter redious and height :  ";
    cin>>r1>>h;
    cout<<"volume of cylinder :  "<<pi*r1*r1*h;

    int i = ( 4 + 7 / 5 * 6 * 6 + 9 )% 100 ;
    cout<<i;
}