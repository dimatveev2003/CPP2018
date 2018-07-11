#include <iostream>

template<typename T> T MyPow(T Base, T PowerBase){
    T Result = 1;
    for (int j = 1; j <= PowerBase; j++){
        Result *= Base;
    }
    return Result;
}
void Test(){
    for (int i = 0; i < 11; i++){
        std::cout << MyPow(2, i) << std::endl;
    }
}

int main()
{
    Test();
    return 0;
}


