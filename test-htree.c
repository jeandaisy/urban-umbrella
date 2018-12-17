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

#include "htree.h"

struct htree_node {
  symbol_t value;
  unsigned int frequency;
  htree *left;
  htree *right;
};

bool is_htree(htree *H);
bool is_htree_leaf(htree *H);
bool is_htree_interior(htree *H);


int main () {
  // Write tests for is_tree here

  htree* tree_1 = xmalloc(sizeof(htree));
  tree_1->frequency = 1;
  tree_1->left = NULL;
  tree_1->right = NULL;

  assert(is_htree(tree_1));


  htree* tree_2 = xmalloc(sizeof(htree));
  tree_2->frequency = 2;
  tree_2->left = NULL;
  tree_2->right = NULL;

  assert(is_htree(tree_2));

  htree* tree_3 = xmalloc(sizeof(htree));
  tree_3->frequency = 3;
  tree_3->left = tree_2;
  tree_3->right = tree_1;

  assert(is_htree(tree_3));

  free(tree_1);
  free(tree_2);
  free(tree_3);

  printf("Success!\n");
  return 0;
}
