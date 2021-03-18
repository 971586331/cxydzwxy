
#include <stdio.h>

namespace myname
{
    int sss = 42;
}

extern "C" int _ZN6myname3sssE;

int main()
{
    printf("%d\n", _ZN6myname3sssE);
    printf("%d\n", myname::sss);

    return 0;
}