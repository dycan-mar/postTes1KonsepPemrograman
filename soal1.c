#include <stdio.h>

int main()
{
    int bil1, bil2, bil3,kos;

    printf("Masukan nilai bilangan 1 : ");
    scanf("%d", &bil1);
    printf("Masukan nilai bilangan 2 : ");
    scanf("%d", &bil2);
    printf("Masukan nilai bilangan 3 : ");
    scanf("%d", &bil3);
    
    if (bil1 < bil2 && bil1 < bil3)
    {
        bil1 = bil1;
        if(bil2<bil3){
            bil2 = bil2;
        }else{
            kos = bil2;
            bil2 = bil3;
            bil3 = kos;
        }
    }
    else if (bil2 < bil1 && bil2 < bil3)
    {
        kos = bil1;
        bil1 = bil2;
        if (kos < bil3)
        {
            bil2 = kos;
        }
        else
        {
            bil2 = bil3;
            bil3=kos;
        }
    }else if(bil3<bil1 && bil3<bil2){
        kos = bil1;
        bil1 = bil3;
        if (kos < bil2)
        {
            bil3 = bil2;
            bil2 = kos;
        }
        else
        {
            bil2 = bil2;
            bil3 = kos;
        }
    }
    printf("bilangan setelah diurutkan : %d %d %d",bil1,bil2,bil3);
    
    return 0;
}