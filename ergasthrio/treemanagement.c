/* File: treemanagement.c */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct tnode *Treeptr;

typedef struct tnode {
  char *word;
  Treeptr left;
  Treeptr right;
}Treenode;

Treeptr addtree(Treeptr, char *);
void treeprint(Treeptr, int);
void nodesprint(Treeptr);
int treedepth(Treeptr);
int treesearch(Treeptr, char *);

int main(int argc, char *argv[]) {
  Treeptr p;
  char buf[80];
  p = NULL;
  while (scanf("%s", buf) != EOF)
    p = addtree(p, buf);
  printf("Tree is:\n");
  treeprint(p, 0);
  printf("\nNodes are:\n");
  nodesprint(p);
  printf("\n\nTree depth is %d\n", treedepth(p));
  printf("\n");
  while (--argc) {
    argv++;
    printf("%s found %s\n", (treesearch(p,*argv)) ?"  " : "not", *argv);
  }
  return 0;
}

Treeptr addtree(Treeptr p, char *w)
{int cond;
  if (p == NULL) {
    p = malloc(sizeof(Treenode));
    p->word = malloc((strlen(w)+1) * sizeof(char));
    strcpy(p->word, w);
    p->left = NULL;
    p->right = NULL;
  }
  else if ((cond = strcmp(w, p->word)) < 0)
    p->left = addtree(p->left,w);
  else if (cond > 0)
    p->right = addtree(p->right, w);
  return p;
}

void treeprint(Treeptr p, int indent)
{int i;
  if (p != NULL) {
    treeprint(p->right, indent+4);
    for (i=0; i < indent; i++)
      printf(" ");
    printf("%s\n", p->word);
    treeprint(p->left, indent+4);
  }
}

void nodesprint(Treeptr p) {
  if (p != NULL) {
    nodesprint(p->left);
    printf("%s ", p->word);
    nodesprint(p->right);
  }
}

int treedepth(Treeptr p) {
  int n1, n2;
  if (p == NULL)
    return 0;
  n1 = treedepth(p->left);
  n2 = treedepth(p->right);
  return (n1 > n2) ? n1+1 : n2+1;
}

int treesearch(Treeptr p, char *w){
  int cond;
  if (p == NULL)
    return 0;
  if ((cond = strcmp(w, p->word)) == 0)
    return 1;
  else if (cond < 0)
    return treesearch(p->left, w);
  else
    return treesearch(p->right, w);
}
