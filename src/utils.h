#ifndef UTILS_H
#define UTILS_H

#include <gmp.h>

typedef unsigned char uchar;

/**
 * Reads n bytes (=n*2 hex characters) from in and save the result in out
 */
void hextouchars(char *in, int n, uchar *out);

/**
 * @param rs Buffer (little-endian) to convert into a 128-bit int
 * @param RS Returned integer
 */
void le_bytes_to_num(uchar rs[16], mpz_t RS);

/**
 * @param T 128-bit input to convert into a buffer
 * @param out Buffer (little-endian) representation of T
 */
void le_bytes_from_num(mpz_t T, uchar out[16]);

#endif // UTILS_H
