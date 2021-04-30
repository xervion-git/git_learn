#include "calcFunc.h"

void add(size_t& res, size_t in1, size_t in2)
{
    res = in1+in2;
}

void mul(size_t& res, size_t in1, size_t in2)
{
    res = in1*in2;
}

void dev(size_t& res, size_t in1, size_t in2)
{
    res = in1/in2;
}

void sin(size_t& res, size_t in1, size_t in2)
{
    res = in1&in2;
}

void sub(size_t& res, size_t in1, size_t in2)
{
    res = in1-in2;
}

void max(size_t& res, size_t in1, size_t in2)
{
    res = (in1>in2) ? in1 : in2;
}
void min(size_t& res, size_t in1, size_t in2)
{
    res = (in1<in2) ? in1 : in2;
}
