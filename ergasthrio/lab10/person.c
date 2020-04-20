#include <stdio.h>
#include <stdlib.h>

struct person {
  char *fname;
  char *lname;
  char *mname;
};

struct person *person_init(char *firstname, char *lastname, char *middlename){
  struct person *temp;
  temp = malloc(sizeof(struct person));
  temp->fname = firstname; 
  temp->lname = lastname;
  temp->mname = middlename;
  
  return temp;
}

struct person *childof(struct person *father, char *newname){
  struct person *temp;
  temp = malloc(sizeof(struct person));
  temp->fname = newname;
  temp->lname = father->lname;
  temp->mname = father->fname;
  return temp;
}

int main (int argc, char **argv){
  struct person *father;
  father = person_init("Ilias", "Panagakos", "Georgiou");
  printf("%s %s tou %s\n", father->fname,father->lname, father->mname);
  struct person *myself;
  myself = childof(father, "Chrysanthos");
  printf("%s %s tou %s\n", myself->fname,myself->lname, myself->mname);
}


