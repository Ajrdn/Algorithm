#include <stdio.h>
int main()
{
    int i,j,n,k,temp,a=0,b=0;
    scanf("%d", &n);
    int list[n];
    for(i=0; i<n; i++)
    {
        scanf("%d", &list[i]);
    }
    for(i=0; i<n-1; i++)
    {
        k=i;
        for(j=i+1; j<n; j++)
        {
            if(list[j]<list[k])
            {
                k=j;
            }
            a++;
        }
        temp=list[i];
        list[i]=list[k];
        list[k]=temp;
        b++;
    }
    printf("\n????Ƚ?? : %d\n??ȯȽ?? : %d\n???İ??? : ", a, b);
    for(i=0; i<n; i++)
    {
        printf("%d ",list[i]);
    }
    return 0;
}