/* Huffman coding
 *
 * Main file for testing is_htree
 * 15-122 Principles of Imperative Computation
 */

#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <ctype.h>

#include "lib/xalloc.h"
#include "lib/contracts.h"

#include "freqtable.h"
#include "htree.h"
#include "encode.h"
#include "compress.h"


int main () {

  bit_t b_new_1[] = "110010000001101";

  printf("%s\n",pack(b_new_1));
  
  printf("%x\n",pack(b_new_1)[0]);
  printf("%x\n",pack(b_new_1)[1]);
  printf("%x\n",pack(b_new_1)[2]);
  printf("%x\n",pack(b_new_1)[3]);
  int a = 0x1ac8;
  printf("%s\n", unpack((uint8_t *) &a, 2));

  assert(pack(b_new_1)[0] == 0xC8);

  
  printf("Success!\n");
  return 0;
}
