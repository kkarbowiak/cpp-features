#include <iostream>
#include <chrono>


#define print(feature) \
do { std::cout << #feature " : " << feature << '\n'; } while (false)


int main()
{
    print(__cpp_lib_chrono);
}
