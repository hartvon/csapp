#include <stdio.h>
#include <assert.h>

int int_size_is_32() {
    int set_msb = 1 << 31;
    int beyond_msb = set_msb << 1;
    return set_msb && !beyond_msb;
}

int int_size_is_32_for_16() {
    int set_msb = 1 << 15 << 15 << 1;
    int beyond_msb = set_msb << 1;
    return set_msb && !beyond_msb;
}

int main(int argc, char* argv[])
{
    assert(int_size_is_32());
    assert(int_size_is_32_for_16());

    return 0;
}