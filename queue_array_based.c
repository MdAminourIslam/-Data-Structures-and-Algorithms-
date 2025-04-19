#include<stdio.h>
int main() {
    int n; scanf("%d", &n);
    int queue[1000];
    int add = 0, dlt = 0, typ, item;
    for(int i = 1; i <= n; i++) {
        printf("type :");
        scanf("%d", &typ);
        if(typ == 1) {
            printf("Item :");
            scanf("%d", &item);
            queue[add++] = item;
        } else {
            if(dlt < add) {
                ++dlt;
            } else {
                printf("!Invalid\n");
                return 0;
            }
        }
    }
    for(int i = dlt ; i < add; i++) {
        printf("%d ", queue[i]);
    }
    return 0;
}
