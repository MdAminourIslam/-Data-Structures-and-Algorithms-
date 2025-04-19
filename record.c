#include<stdio.h>
#include<stdlib.h>
struct record {
  char name[100];
  int id;
  double cgpa;
};
int main() {
   int n; scanf("%d", &n);
   int a[n];
   for(int i = 0; i < n; i++) {
    scanf("%d", &a[i]);
   }
   for(int i = 0; i < n; i++) printf("%d ", a[i]);
   return 0;
}

