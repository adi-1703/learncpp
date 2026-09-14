#include<iostream>
#include<cstdlib>

// #include"add.cpp"

int add(int a,int b);

int main(){
    int x{5};
    std::cout<<add(1,2)<<std::endl;
    return 0;
    // return 0; 
}

//g++ main.cpp add.cpp -o my_program - this is working, linker is working