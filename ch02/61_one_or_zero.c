#include <stdio.h>
#include <assert.h>

int foo(int x) {
    int shift = (sizeof(int)-1) << 3;
    return (!~x) ||
           (!x) ||
           (!~(x | ~0xFF)) ||
           (!((x >> shift) & 0xFF));
}

int main(int argc, char* argv[])
{
    assert(foo(~0x00) &&
           foo(0x00) &&
           foo(0xFF) &&
           foo(0x00123456));
    return 0;
}