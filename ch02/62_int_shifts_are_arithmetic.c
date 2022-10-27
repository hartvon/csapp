#include <stdio.h>
#include <assert.h>

int int_shifts_are_arithmetic() {
    // my solusion
    // int x = -12345;
    // int x_right_shift = x >> ((sizeof(int)-1) << 3);
    // int x_most_byte = x_right_shift & 0xFF;
    // return x_right_shift == (x_most_byte | ~0xFF);

    // standard solusion
    int x = -1;
    return !(x ^ (x >> 1));
}

int main(int argc, char const *argv[])
{
    assert(int_shifts_are_arithmetic());
    return 0;
}
