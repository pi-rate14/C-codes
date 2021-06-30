#include <stdlib.h>
#include <stdio.h>

typedef struct btree {
    int value;
    struct btree *left;
    struct btree *right;
} Btree;

void insert(Btree **t, int *a, int index, int n)
{

    if (index < n) {
        *t = malloc(sizeof(**t));

        (*t)->value = a[index];
        (*t)->left = NULL;
        (*t)->right = NULL;

        insert(&(*t)->left, a, 2 * index + 1, n);
        insert(&(*t)->right, a, 2 * index + 2, n);
    }
}

void print(Btree *t, int level)
{
    if (t) {
        print(t->left, level + 1);
        printf("%*s->%d\n", 4*level, "", t->value);
        print(t->right, level + 1);
    }
}

int main(void)
{
    int a[] = {5, 2, 6, 1, 3, 9};
    Btree *t;

    insert(&t, a, 0, 7);
    print(t, 0);

    // TODO: Clean up memory used by nodes

    return 0;
}
