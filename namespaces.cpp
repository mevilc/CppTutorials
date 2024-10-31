#include <iostream>

using namespace std;

namespace test
{
    int i;
}

namespace 
{
    int i;
}

int main()
{
    ::i = 0;      // global namespace
    i = 1;        // global namespace
    test::i = 0;

    return 0;
}