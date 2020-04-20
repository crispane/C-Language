#include <stdio.h>
#include <stdlib.h>

typedef struct tnode* Treeptr;

struct tnode {
  int* data;
  Treeptr left;
  Treeptr right;
};

Treeptr addtree(Treeptr, int);
void treeprint(Treeptr);

int main(int argc, char** argv)
{
  Treeptr p;
  int number;
  p = NULL;
  while (scanf("%d", &number) != EOF)
    p = addtree(p, number);

  treeprint(p);
}

Treeptr addtree(Treeptr p, int x)
{
  if (p == NULL) {
    p = malloc(sizeof(Treeptr));
    p->data = malloc(sizeof(int));
    *p->data = x;
    p->left = NULL;
    p->right = NULL;
  } else if (*p->data > x) {
    p->left = addtree(p->left, x);
  } else if (*p->data < x)
    p->right = addtree(p->right, x);
}

void treeprint(Treeptr p)
{
  if (p != NULL) {
    treeprint(p->left);
    printf("%d ", *p->data);
    treeprint(p->right);
  }
}
