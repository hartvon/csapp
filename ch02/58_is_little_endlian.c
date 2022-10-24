#include <stdio.h>

int is_little_endlian() {
    union {
        short val;
        char bytes[sizeof(short)];
    } un;
    un.val = 0x0102;
    if (un.bytes[0] == 0x02 && un.bytes[1] == 0x01) {
        return 1;
    } else {
        return 0;
    }
}

int main(int argc, char* argv[])
{
    printf("Result of is_little_endlian(): %d\n",
            is_little_endlian());

    return 0;
}