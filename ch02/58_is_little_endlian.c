#include <stdio.h>
#include <assert.h>

int is_little_endlian() {
    // Solution-1
    // union {
    //     short val;
    //     char bytes[sizeof(short)];
    // } un;
    // un.val = 0x0102;
    // if (un.bytes[0] == 0x02 && un.bytes[1] == 0x01) {
    //     return 1;
    // } else {
    //     return 0;
    // }

    // Solution-2
    int val = 0xFF;
    unsigned char* pb = (unsigned char*)&val;
    if (*pb == 0xFF) {
        return 1;
    } else {
        return 0;
    }
}

int main(int argc, char* argv[])
{
    assert(is_little_endlian());

    return 0;
}