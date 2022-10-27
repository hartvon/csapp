#include <stdio.h>
#include <assert.h>

typedef unsigned packed_t;

int xbyte(packed_t word, int bytenum) {
    // standard solution
    int max_bytenum = 3;
    return (int)word << ((max_bytenum-bytenum) << 3) >> (max_bytenum << 3);
}

int main(int argc, char* argv[])
{
    assert(xbyte(0xAABBCCDD, 3) == 0xFFFFFFAA);
    return 0;
}