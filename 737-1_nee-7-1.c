#include <stdio.h>
#include <stdlib.h>
 
int sorting_function(int *arr, int *arr_len){
int dad;
int i, j, t;
for ( t = *arr_len / 2; t > 0; t = t/2) {
for ( i = t; i < *arr_len; i++) {
dad = arr[i];
for ( j = i; j >= t ; j = j - t) {
if (dad < arr[j - t]){
arr[j] = arr[j - t];
}
else{
break;
}
}
arr[j] = dad;
}
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

