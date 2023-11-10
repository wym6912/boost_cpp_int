#include <boost/multiprecision/cpp_int.hpp>
#include <iostream>

using namespace boost::multiprecision;

int128_t v = 1;

int main()
{
    std::cout << v << std::endl;
    int128_t *L = (int128_t*)malloc(sizeof(int128_t));
    L[0] = (int128_t)1 << 127;
    std::cout << L[0] << std::endl;
    return 0;
}