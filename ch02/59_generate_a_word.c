#include <stdio.h>
#include <assert.h>

int main(int argc, char* argv[])
{
    int x = 0x12345678, y = 0x87654321;
    int ret = (x & 0xFF) | (y & ~0xFF);
    assert(ret == 0x87654378);

    return 0;
}