#ifdef fp128_h
#error Already included.
#else
#define fp128_h

using fp128 = __float128;
static_assert(sizeof(fp128) == 16U);

#endif
