#include <iostream>
int main()
{
int b=2;
for(int i=0;i<10;++i)
{
int p;
p=1;
for(int t=1;t<=i;++t)
p=p*b;
std::cout<<p<<" ";
}
std::cout<<std::endl;
return 0;
}
