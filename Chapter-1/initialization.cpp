#include<iostream>

int main(){
    int a;
    int b=5;    // Copy Initialization
    int c(7);   // Direct Initialization
    [[maybe_unused]]int d{6};   // Direct List Initialization also used [[maybe_unused]] attribute 
    int e{};    // Value Initialization 

    std::cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e<<"\n"; 
    // Output is: 98 5 7 6 0
}