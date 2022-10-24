#include <stdio.h>

typedef unsigned char* byte_pointer;

void show_bytes(byte_pointer start, size_t len) {
    for (int i = 0; i < len; ++i) {
        printf(" %.2x", *(start+i));
    }
    printf("\n");
}

void show_int(int iv) {
    show_bytes((byte_pointer)&iv, sizeof(int));
}

void show_float(float fv) {
    show_bytes((byte_pointer)&fv, sizeof(float));
}

void show_pointer(void* p) {
    show_bytes((byte_pointer)&p, sizeof(void*));
}

void show_short(short sv) {
    show_bytes((byte_pointer)&sv, sizeof(short));
}

void show_long(long lv) {
    show_bytes((byte_pointer)&lv, sizeof(long));
}
void show_double(double dv) {
    show_bytes((byte_pointer)&dv, sizeof(double));
}

void test_show_bytes(int val) {
    int ival = val;             show_int(ival);
    float fval = (float)val;    show_float(fval);
    int *pval = &val;           show_pointer(pval);
    short sval = (short)val;    show_short(sval);
    long lval = (long)val;      show_long(lval);
    double dval = (double)val;  show_double(dval);
}

int main(int argc, char* argv[])
{
    test_show_bytes(12);

    return 0;
}