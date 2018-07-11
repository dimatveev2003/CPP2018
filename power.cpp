/*! \file */ 
#include <iostream>
//! this function powered number
template<typename T> T MyPow(T Base, T PowerBase){
    T Result = 1;
    for (int j = 1; j <= PowerBase; j++){
        Result *= Base;
    }
    return Result;
}
//! this function test
void Test(){
    for (int i = 0; i < 11; i++){
        std::cout << MyPow(2, i) << std::endl;
    }
}
//! main function
/*
 specify  of main
*/
int main()
{
    Test();
    return 0;
}


