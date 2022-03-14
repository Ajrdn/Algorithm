#include <stdio.h>
int main()
{
    int i,j,n,k,temp,key;
    scanf("%d", &n);
    int list[n];
    for(i=0; i<n; i++)
    {
        scanf("%d", &list[i]);
    }
    for(i=1; i<n; i++)
    {
        key=list[i];
        for(j=i-1; j>=0 && list[j]<key; j--)
        {
            list[j+1]=list[j];
        }
        list[j+1]=key;
    }
    printf("\n정렬결과 : ");
    for(i=0; i<n; i++)
    {
        printf("%d ",list[i]);
    }
    return 0;
}