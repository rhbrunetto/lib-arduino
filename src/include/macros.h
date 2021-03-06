#ifndef _MACROS_
#define MACROS
#define swt_bit(x, n) (x ^= (1 << n))
#define set_bit(x, n) (x |= (1 << n))
#define clr_bit(x, n) (x &= ~(1 << n))
#define tst_bit(x, n) (x&(1 << n))
#define comp_masks(x, y) ((1 << x) | (1 << y))
#endif
