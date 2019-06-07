#include <stdio.h>
#include <stdlib.h>
 
void swap(int *a, int *b){
int c;
c = *a;
*a = *b;
*b = c;
}
 
int sorting_function(int *arr, int *arr_len){
double f = 1.247;
int t = *arr_len - 1;
while(t >= 1){
for (int i = 0; i + t < *arr_len; i++) {
if (arr[i] > arr[i + t]){
swap(&arr[i], &arr[i + t]);
}
}
t = t/f;
}
return 0;
}
 
int main() {
int *mass;
int n;
double f = 1.247;
double t = n - 1;
scanf("%d", &n);
mass = (int*)malloc(n * sizeof(int));
for (int i = 0; i < n; i++){
scanf("%d", &mass[i]);
}
 
sorting_function(mass, &n);
 
for (int i = 0; i < n; i++) {
if (i == n - 1){
printf("%d\n", mass[i]);
break;
}
printf("%d ", mass[i]);
}
return 0;
}
