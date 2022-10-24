#include <stdio.h>

unsigned replace_byte(unsigned ux, size_t i, unsigned char b) {
    // solution-1
    unsigned char* bp = (unsigned char*)&ux;
    bp[i] = b;  // with little endlian
    return ux;

    // solution-2
    // unsigned mask = 0xFF << (i << 3);
    // ux = ux & ~mask;
    // return ux | (b << (i << 3));
}

int main(int argc, char* argv[])
{
    printf("Result of replace_byte(): %x\n",
            replace_byte(0x12345678, 2, 0xAB));

    return 0;
}