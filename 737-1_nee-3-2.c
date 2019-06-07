#include <stdio.h>
#include <stdlib.h>
 
struct node {
int value;
struct node *next;
struct node *prev;
} node;
 
struct list {
struct node* head;
struct node* tail;
} list;
 
void init(struct list* l, int value) {
struct node* cur;
cur = (struct node*)malloc(sizeof(struct node));
cur -> value = value;
cur -> prev = NULL;
cur -> next = NULL;
l -> head = cur;
l -> tail = cur;
}
 
void clear(struct list* l) {
struct node* cur = l -> head;
struct node* vsp = NULL;
while (cur != NULL) {
vsp = cur -> next;
free(cur);
cur = vsp;
}
l -> head = NULL;
l -> tail = NULL;
}
 
int isEmpty(struct list* l) {
return l -> head == NULL && l -> tail == NULL;
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
 
int push_back(struct list* l, int value) {
if (isEmpty(l) == 1) {
init(l, value);
}
else {
struct node *cur = (struct node*)malloc(sizeof(struct node));
cur -> value = value;
cur -> prev = l -> tail;
cur -> next = NULL;
l -> tail = cur;
cur -> prev -> next = cur;
}
return 0;
}

int push_front(struct list* l, int value) {
if (isEmpty(l) == 1) {
init(l, value);
}
else {
struct node *cur = (struct node*)malloc(sizeof(struct node));
cur -> value = value;
cur -> next = l -> head;
cur -> prev = NULL;
l -> head = cur;
cur -> next -> prev = cur;
}
return 0;
}
 
int insertAfter(struct list* l, int pos, int value) {
struct node* cur = l -> head;
for (int i = 1; i < pos; i++) {
cur = cur -> next;
if (cur == NULL) {
return 1;
}
}
struct node *vsp = malloc(sizeof(node));
vsp -> value = value;
vsp -> next = cur -> next;
vsp -> prev = cur;
cur -> next -> prev = vsp;
cur -> next = vsp;
return 0;
}
 
int insertBefore(struct list* l, int pos, int value) {
struct node* cur = l -> head;
for (int i = 1; i < pos; i++) {
cur = cur -> next;
if (cur == NULL) {
return 1;
}
}
struct node *vsp = malloc(sizeof(node));
vsp -> value = value;
vsp -> prev = cur -> prev;
vsp -> next = cur;
cur -> prev = vsp;
vsp -> prev -> next = vsp;
return 0;
}
 
int removeFirst(struct list* l, int value) {
struct node* cur = find(l, value);
if (cur != NULL) {
if (cur == l -> head && cur == l -> tail) {
clear(l);
return 1;
}
if (cur == l -> head ){
l -> head = cur -> next;
cur -> next -> prev = NULL;
}
else if(cur == l -> tail) {
l -> tail = cur -> prev;
cur -> prev -> next = NULL;
}
else if (cur != l -> head && cur != l -> tail) {
cur -> next -> prev = cur -> prev;
cur -> prev -> next = cur -> next;
}
free(cur);
return 0;
}
return 1;
}
 
int removeLast(struct list* l, int value) {
struct node* cur = l -> tail;
while (cur -> value != value) {
cur = cur -> prev;
if (cur -> next == NULL) {
return 1;
}
}
if (cur != NULL) {
if (cur == l -> head && cur == l -> tail) {
clear(l);
return 1;
}
if (cur == l -> head) {
l -> head = cur -> next;
cur -> next -> prev = NULL;
}
else if(cur == l -> tail) {
l -> tail = cur -> prev;
cur -> prev -> next = NULL;
}
else if (cur != l -> head && cur != l -> tail) {
cur -> next -> prev = cur -> prev;
cur -> prev -> next = cur -> next;
}
free(cur);
return 0;
}
}
 
void print(struct list* l) {
struct node* cur = l -> head;
while (cur -> next != NULL) {
printf("%d ", cur -> value);
cur = cur -> next;
}
printf("%d\n", cur -> value);
}

void print_invers(struct list* l) {
struct node* cur = l -> tail;
while (cur -> prev != NULL) {
printf("%d ", cur -> value);
cur = cur -> prev;
}
printf("%d\n", cur -> value);
}
 
int main() {
int n, value;
struct list* l=(struct list*)malloc(sizeof(struct list));
scanf("%d", &n);
for (int i = 0; i < n; i++) {
scanf("%d",&value);
push_back(l, value);
}
print(l);
 
int k[3];
scanf("%d%d%d", &k[0], &k[1], &k[2]);
for (int i = 0; i < 3; i++) {
if (find(l, k[i]) != NULL) {
printf("1");
}
else {
printf("0");
}
}
printf("\n");

int m;
scanf("%d", &m);
push_back(l, m);
print_invers(l);

int t;
scanf("%d", &t);
push_front(l, t);
print(l);

int j, x;
scanf("%d%d", &j, &x);
insertAfter(l, j, x);
print_invers(l);

int u, y;
scanf("%d%d", &u, &y);
insertBefore(l, u, y);
print(l);
 
int z;
scanf("%d", &z);
removeFirst(l, z);
print_invers(l);
 
int r;
scanf("%d", &r);
removeLast(l, r);
print(l);
 
clear(l);
 
return 0;
}
