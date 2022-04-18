#include <iostream>
#include <vector>

#include "binaryTree.h"
#include "genericTree.h"

using namespace std;

int main() {
  genericTree* root = createGenericTree();
  printGenericTree(root);
  return 0;
}