#include <stdio.h>

int main(int argc, char* argv[])
{
    int x = 0x12345678, y = 0x87654321;
    int ret = (x & 0xFF) | (y & 0xFFFFFF00);
    printf("%x\n", ret);

    return 0;
}