#include <stdio.h>
#include <assert.h>

int fits_bits(int x, int n) {
    // standard solution
    int offset = (sizeof(int) << 3) - n;
    return (x << offset >> offset) == x;
}

int main(int argc, char* argv[])
{
    assert(fits_bits(0x80, 9));
    return 0;
}