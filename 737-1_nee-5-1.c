#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
 
typedef struct Node
{
int value;
struct Node *left;
struct Node *right;
struct Node *parent;
} Node;
 
typedef struct tree
{
struct Node *root;
int count;
} Tree;
typedef struct listBaseNode
{
Node *ptr_node_tree;
struct listBaseNode *next;
} ListBaseNode;
 
typedef struct list
{
ListBaseNode *first;
ListBaseNode *last;
}List;
void init(Tree *tree) {
 
tree->root = NULL;
}
void createlist(List *q)
{
q->first = NULL;
q->last = NULL;
};
 
int push(List *q, Node *n)
{
ListBaseNode *newList = (ListBaseNode*)malloc(sizeof(ListBaseNode));
newList->ptr_node_tree = n;
newList->next = NULL;
if (q->first)
q->last->next = newList;
else
q->first = newList;
q->last = newList;
return 0;
}
 
void clearlist(List  *q)
{
ListBaseNode *itNeedAble, *nq;
itNeedAble = q->first;
do
{
nq = itNeedAble;
itNeedAble = itNeedAble->next;
free(nq);
} while (itNeedAble);
q->first = NULL;
q->last = NULL;
}
int insert(Tree *tree, int value) {
Node *temp = (Node*)malloc(sizeof(Node));

temp->value = value;
 
 
if (tree->root == NULL) {
temp->left = temp->right = NULL;
temp->parent = NULL;
tree->root = temp;
tree->count = 1;
return 0;
}

if (temp->value == tree->root->value)
return -1;

Node *root2 = (Node*)malloc(sizeof(Node)), *root3 = NULL;

root2 = tree->root;

while (root2 != NULL)
{
root3 = root2;
if (value < root2->value)
root2 = root2->left;
else
root2 = root2->right;
}

if (temp->value == root3->value) {
return -1;
}
temp->parent = root3;
temp->left = NULL;
temp->right = NULL;
 
if (value < root3->value)
root3->left = temp;
else
root3->right = temp;
tree->count++;
return 0;
}
void print(Node* node)
{
List list1, list2;
List *ptrlist1 = &list1;
List *ptrlist2 = &list2;
createlist(ptrlist1);
createlist(ptrlist2);
Node *tmp = NULL;
ListBaseNode*q = NULL;
int c = 0, val = node->value, j = 0;
Node *l = node->left;
Node *r = node->right;
push(ptrlist1, node);
while (true)
{
while (ptrlist1->first)
{
if (ptrlist1->first)
{
ListBaseNode *nodelist_pop;
tmp = ptrlist1->first->ptr_node_tree;
nodelist_pop = ptrlist1->first;
ptrlist1->first = ptrlist1->first->next;
if (ptrlist1->first == NULL)
ptrlist1->last = NULL;
free(nodelist_pop);
}
else
tmp = NULL;
if (ptrlist1->first == NULL)
{
if (tmp->value == val && c == 1)
printf("");
else
printf("%d ", tmp->value);
}
else if (tmp->value == val && c == 1)
printf("");
else
printf("%d ", tmp->value);
if (tmp->left)
push(ptrlist2, tmp->left);
else
push(ptrlist2, node);
if (tmp->right)
push(ptrlist2, tmp->right);
else
push(ptrlist2, node);
}
node->left = node->right = NULL;
c = 1;
q = ptrlist2->first;
while (ptrlist2->first->ptr_node_tree->value == val)
{
ptrlist2->first = ptrlist2->first->next;
if (ptrlist2->first->next == NULL)
if (ptrlist2->first->ptr_node_tree->value == val)
{
j = 1;
node->left = l;
node->right = r;
clearlist(ptrlist2);
break;
}
}
ptrlist2->first = q;
if (j == 1)
break;
ptrlist1->first = ptrlist2->first;
ptrlist1->last = ptrlist2->last;
ptrlist2->first = NULL;
ptrlist2->last = NULL;
}
}
 
int main()
{
Tree *tree = (Tree*)malloc(sizeof(Node));
init(tree);

int a[7];
scanf("%d%d%d%d%d%d%d", &a[0], &a[1], &a[2], &a[3],&a[4],&a[5],&a[6]);
for (int i = 0; i < 7; i++)
insert(tree, a[i]);
print(tree->root);
printf("\n");

return 0;
}
