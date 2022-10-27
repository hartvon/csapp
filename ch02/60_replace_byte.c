#include <stdio.h>
#include <assert.h>

unsigned replace_byte(unsigned ux, size_t i, unsigned char b) {
    // solution-1
    // unsigned mask = 0xFF << (i << 3);
    // ux = ux & ~mask;
    // return ux | (b << (i << 3));

    // solution-2
    unsigned char* bp = (unsigned char*)&ux;
    bp[i] = b;  // with little endlian
    return ux;
}

int main(int argc, char* argv[])
{
    assert(replace_byte(0x12345678, 2, 0xAB) == 0x12AB5678);
    return 0;
}