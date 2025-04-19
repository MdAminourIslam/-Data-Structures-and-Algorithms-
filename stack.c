#include<stdio.h>
int main() {
  int stack[50];
  int top = 1, typ, val;
  printf("enter size : \n");
  int n; scanf("%d", &n);
  for(int i = 1; i <= n; i++) {
     scanf("%d %d", &typ, &val);
     if(typ == 0) {
        if(top >= 1) top -= 1;
        else {
            printf("stack is invalid!! \n");
            return 0;
        }
     }
     else stack[top++] = val;
  }
  for(int i = top - 1; i >= 1; i--) printf("%d ", stack[i]);
}
