#include <stdio.h>
#include <stdlib.h>

typedef struct listnode* Listptr;

struct listnode {
    int data;
    Listptr next;
};

void insert_at_start(Listptr*, int);
void print(Listptr);

int main(int argc, char** argv)
{
    Listptr alist;
    alist = NULL;

    char ch;
    int val = 0;
    while ((ch = getchar()) != EOF) {
        if (ch >= '0' && ch <= '9')
            val = 10 * val + (ch - '0');
        if (ch == ' ') {
            insert_at_start(&alist, val);
            val = 0;
        }
    }

    printf("List is ");
    print(alist);
}

void insert_at_start(Listptr* ptr, int grade)
{
    Listptr templist;
    templist = *ptr;
    *ptr = malloc(sizeof(struct listnode));
    (*ptr)->data = grade;
    (*ptr)->next = templist;
}

void print(Listptr list)
{
    while (list != NULL) {
        printf("%d--> ", list->data);
        list = list->next;
    }
    printf("NULL\n");
}
