#include<iostream>
using namespace std;
int printArray(int array[])
{
    std::cout<<sizeof(array);
    
    }
int main()
{
    int alpha[] = {4,5,6,5,4,44,3};
    std::cout<<sizeof(alpha);
    printArray(alpha);
}