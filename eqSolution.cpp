// Example program
#include <iostream>
#include <string>

using namespace std;

template<typename T> double eqSolution(T a, T b, T y)
{
    return ((y - b)/a);
}

void testFunc()
{
    cout << eqSolution(2, 4, 6) << endl;
    cout << eqSolution(3.2, 3.0, 2.0) << endl;
}


int main()
{
 testFunc();
}