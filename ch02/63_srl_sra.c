#include <stdio.h>
#include <assert.h>

int w = sizeof(int) << 3;

unsigned srl(unsigned x, int k) {
    unsigned xsra = (int)x >> k;
    // my solution
    // return xsra & ~(0x80000000 >> (w-k));

    // standard solution
    int mask = (int)-1 << (w-k);
    return x & ~mask;
}

int sra(int x, int k) {
    // standard solution
    int xsrl = (unsigned)x >> k;
    int mask = (int) -1 << (w - k);
    //let mask remain unchanged when the first bit of x is 1, otherwise 0.
    int m = 1 << (w - 1);
    mask &= ! (x & m) - 1;
    return xsrl | mask;
}

int main(int argc, char const *argv[])
{
    unsigned x = 0x12345678;
    assert(srl(x, 4) == x >> 4);
    return 0;
}
