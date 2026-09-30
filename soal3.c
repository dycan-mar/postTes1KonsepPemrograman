#include <stdio.h>

int main(){
    int n;
    printf("masukan nilai n:");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        /* code */
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", i * j);
        }
        printf("\n");
    }
    

    return 0;
}