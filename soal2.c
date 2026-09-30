#include <stdio.h>
int main()
{
    int m, n, jumlah;
    printf("masukan nilai n= ");
    scanf("%d", &n);
    printf("masukan nilai m= ");
    scanf("%d", &m);

    for (int i = 1; i <= m; i++)
    {
        if (i % n == 0)
        {
            jumlah += i;
        }
    }
    printf("jumlah kelipatan %d bilangan antara 1 sampai %d adalah %d", n, m, jumlah);
    return 0;
}