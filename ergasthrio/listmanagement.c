/* File: listmanagement.c */
#include <stdio.h>
#include <stdlib.h>

typedef struct listnode* Listptr;

struct listnode {
    int value;
    Listptr next;
};

int empty(Listptr);
int in(Listptr, int);
int n_th(Listptr, int, int*);
void insert_at_start(Listptr*, int);
void insert_at_end(Listptr*, int);
int delete (Listptr*, int);
void print(Listptr);

int main(void)
{
    Listptr alist;
    int v;
    alist = NULL;
    printf("List is%sempty\n", empty(alist) ? " " : " not");
    insert_at_start(&alist, 44);
    printf("List is ");
    print(alist);
    insert_at_end(&alist, 55);
    printf("List is ");
    print(alist);
    insert_at_start(&alist, 33);
    printf("List is ");
    print(alist);
    insert_at_end(&alist, 66);
    printf("List is ");
    print(alist);
    printf("List is%sempty\n", empty(alist) ? " " : " not");
    printf("55 is%sin list\n", in(alist, 55) ? " " : " not ");
    printf("77 is%sin list\n", in(alist, 77) ? " " : " not ");
    if (n_th(alist, 2, &v))
        printf("Item no 2 is %d\n", v);
    else
        printf("Item no 2 does not exist\n");
    if (n_th(alist, 6, &v))
        printf("Item no 6 is %d\n", v);
    else
        printf("Item no 6 does not exist\n");
    printf("Deleting 55. %s\n", delete (&alist, 55) ? "OK!" : "Failed!");
    printf("List is ");
    print(alist);
    printf("Deleting 22. %s\n", delete (&alist, 22) ? "OK!" : "Failed!");
    printf("List is ");
    print(alist);
    printf("Deleting 33. %s\n", delete (&alist, 33) ? "OK!" : "Failed!");
    printf("List is ");
    print(alist);
    return 0;
}

int empty(Listptr list)
{
    if (list == NULL)
        return 1;
    else
        return 0;
}

int in(Listptr list, int v)
{
    while (list != NULL)
        if (list->value == v)
            return 1;
        else
            list = list->next;
    return 0;
}

int n_th(Listptr list, int n, int* vaddr)
{
    while (list != NULL)
        if (n-- == 1) {
            *vaddr = list->value;
            return 1;
        } else
            list = list->next;
    return 0;
}

void insert_at_start(Listptr* ptraddr, int v)
{
    Listptr templist;
    templist = *ptraddr;
    *ptraddr = malloc(sizeof(struct listnode));
    (*ptraddr)->value = v;
    (*ptraddr)->next = templist;
}

void insert_at_end(Listptr* ptraddr, int v)
{
    while (*ptraddr != NULL)
        ptraddr = &((*ptraddr)->next);
    *ptraddr = malloc(sizeof(struct listnode));
    (*ptraddr)->value = v;
    (*ptraddr)->next = NULL;
}

int delete (Listptr* ptraddr, int v)
{
    Listptr templist;
    while ((*ptraddr) != NULL)
        if ((*ptraddr)->value == v) {
            templist = *ptraddr;
            *ptraddr = (*ptraddr)->next;
            free(templist);
            return 1;
        } else
            ptraddr = &((*ptraddr)->next);
    return 0;
}

void print(Listptr list)
{
    while (list != NULL) {
        printf("%d--> ", list->value);
        list = list->next;
    }
    printf("NULL\n");
}
