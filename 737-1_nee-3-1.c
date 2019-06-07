#include <stdio.h>
#include <stdlib.h>

struct node {
int value;
struct node *next;
} node;

struct list {
struct node *head;
struct node *tail;
}  list;

void init(struct list* l, int value) {
struct node* cur;
cur = (struct node*)malloc(sizeof(struct node));
cur -> value = value;
cur -> next = NULL;
l -> head = cur;
 //  l ->tail = cur;
}

void clear(struct list* l) {
struct node *cur = l -> head;
struct node *nul = NULL;
while ( cur != NULL) {
nul = cur -> next;
// nul = cur ->value;
free(cur);
cur = nul;
}
l -> head = NULL;
}

int  isEmpty(struct list* l) {
return l -> head == NULL;
}

struct node* find(struct list* l, int value) {
struct node *cur = l -> head;
while (cur -> value != value) {
if (cur -> next != NULL) {
cur = cur -> next;
}
else {
return 0;
}
}
return cur;
}

int push_back (struct list* l, int value) {
if (isEmpty(l) == 1) {
init(l, value);
}
else {
struct node* cur = (struct node*) malloc(sizeof(struct node));
cur -> value = value;
cur -> next = NULL;
struct node* pre = l -> head;
while(pre -> next != NULL) {
pre = pre -> next;
}
pre -> next = cur;
}
return 0;
}

int push_front (struct list* l, int value) {
if (isEmpty(l) == 1) {
init(l, value);
}
else {
struct node* cur = (struct node*) malloc(sizeof(struct node));
cur -> value = value;
cur -> next = l -> head;
l -> head = cur;
}
return 0;
}

int insertAfter (struct list* l, int next, int value) {
struct node* cur = malloc(sizeof(node));
cur -> value = value;
struct node* fir = l -> head;
struct node* pre = l -> head;
for (int i = 0; i < next; i++) {
pre = fir;
fir = fir -> next;
if (fir == NULL) {
return 1;
}
}
pre -> next = cur;
cur -> next = fir;
return 0;
}

void remvsp(struct list* l, struct node *cur) {
if(cur != NULL) {
if(cur == l -> head) {
l -> head = cur -> next;
}
else {
struct node *ad = (struct node*)malloc(sizeof(struct node));
ad = l -> head;
while(ad -> next != cur)
ad = ad -> next;
ad -> next = cur -> next;
}
free(cur);
}
}

int rem(struct list* l, int value) {
struct node* cur = find(l, value);
if (cur != NULL) {
remvsp(l, cur);
return 0;
}
return 1;
}

void print(struct list* l) {
struct node* cur = l -> head;
while (cur -> next != NULL) {
printf("%d ", cur -> value);
cur = cur -> next;
}
printf("%d\n" , cur -> value);
}

int main(){
int n, value;
struct list* list = (struct list*)malloc(sizeof(struct list));
scanf("%d", &n);
for (int i = 0; i < n; i++) {
scanf("%d", &value);
push_back(list, value);
}
print(list);
int k[3];
scanf("%d%d%d", &k[0], &k[1], &k[2]);

for (int i = 0; i < 3; i++) {
if (find(list, k[i]) == NULL) {
printf("0");
}
else {
printf("1");
}
}
printf("\n");
int m;
scanf("%d", &m);
push_back(list, m);
print(list);

int t;
scanf("%d", &t);
push_front(list, t);
print(list);

int x, j;
scanf("%d", &x);
scanf("%d", &j);
insertAfter(list, x,j);
print(list);

int z;
scanf("%d", &z);
rem(list, z);
print(list);
clear(list);
return 0;
}
