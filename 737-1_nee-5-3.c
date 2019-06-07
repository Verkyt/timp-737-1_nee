#include <stdio.h>
#include <stdlib.h>
 
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
typedef struct listNode
{
Node *ptr_node_tree;
struct listNode *next;
}ListNode;
 
typedef struct list
{
ListNode *first;
ListNode *last;
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
ListNode *newList = (ListNode*)malloc(sizeof(ListNode));
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
ListNode *itNeedAble, *nq;
itNeedAble = q->first;
do
{
nq = itNeedAble;
itNeedAble = itNeedAble->next;
free(nq);
}
while (itNeedAble);
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
 
void print(Node *root) {
if (root) {
print(root->left);
print(root->right);
printf("%d ", root->value);
}
}

int main()
{
Tree *tree = (Tree*)malloc(sizeof(Node));
init(tree);

int a[7];
scanf("%d%d%d%d%d%d%d", &a[0], &a[1], &a[2], &a[3],&a[4],&a[5],&a[6]);
for (int i = 0; i < 7; i++) {
insert(tree, a[i]);
}
print(tree->root);
printf("\n");
return 0;
}
