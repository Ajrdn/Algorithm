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
    for(i=n-1; i>0; i--)
    {
        for(j=0; j<i; j++)
        {
            if(list[j]<list[j+1])
            {
                temp=list[j];
                list[j]=list[j+1];
                list[j+1]=temp;
                b++;
            }
            a++;
        }
    }
    printf("\n��Ƚ�� : %d\n��ȯȽ�� : %d\n���İ�� : ", a, b);
    for(i=0; i<n; i++)
    {
        printf("%d ",list[i]);
    }
    return 0;
}