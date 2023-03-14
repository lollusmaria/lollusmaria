#include <stdio.h>

int main()
{
    int x;
    int y;
    int z;
    printf("ïnserisci tre numeri: ");
    scanf("%d", &x);
    scanf("%d", &y);
    scanf("%d", &z);
    if(x-y==y-z)
    {
    printf("i numeri sono in successione");
    }
    else
    {
        printf("ï numeri non sono in successione");
    }
}