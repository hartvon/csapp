#include <stdio.h>
#include <assert.h>

int lower_one_mask(int n) {
    return ~((int)-1 << (n-1) << 1);
}

int main(int argc, char* argv[])
{
    assert(lower_one_mask(32) == ~0x00);

    return 0;
}