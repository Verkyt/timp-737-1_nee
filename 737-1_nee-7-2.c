#include <stdio.h>
#include <stdlib.h>
 
void down(int *mass, int root, int bottom) {
int maxChild;
int done = 0;
while ((root * 2 <= bottom) && (!done))
{
if (root * 2 == bottom)
maxChild = root * 2;
else if (mass[root * 2] > mass[root * 2 + 1])
maxChild = root * 2;
else
maxChild = root * 2 + 1;
if (mass[root] < mass[maxChild])
{
int temp = mass[root];
mass[root] = mass[maxChild];
mass[maxChild] = temp;
root = maxChild;
}
else
done = 1;
}
}
 
int sorting_function(int *mass, int arr_len) {
for (int i = (arr_len / 2) - 1; i >= 0; i--)
down(mass, i, arr_len - 1);
for (int i = arr_len - 1; i >= 1; i--)
{
int temp = mass[0];
mass[0] = mass[i];
mass[i] = temp;
down(mass, 0, i - 1);
}
return 0;
}
 
int main() {
int *mass;
int n;
scanf("%d", &n);
mass = (int*)malloc(n * sizeof(int));
for (int i = 0; i < n; i++){
scanf("%d", &mass[i]);
}
 
sorting_function(mass, n);

for (int i = 0; i < n; i++) {
if (i == n - 1){
printf("%d\n", mass[i]);
break;
}
printf("%d ", mass[i]);
}
return 0;
}
