#include <stdio.h>
#define swap(x,y,t) ((t)=(x), (x)=(y), (y)=(t))
int count;
int partition(int list[], int left,int right)
{
    int pivot,temp,low,high;
    low = left;
    high= right+1;
    pivot=list[left];
    do
    {
        do
        {
            low++;
        }while(list[low]<pivot);
        do
        {
            high--;
        }while(list[high]>pivot);

        if(low<high)
        {
            swap(list[low],list[high],temp);
        }
    }while(low<high);
    swap(list[left],list[high],temp);
    return high;
}

void quicksort(int list[], int left,int right)
{
    if(left<right)
    {
        int q=partition(list, left, right);
        quicksort(list,left,q-1);
        quicksort(list,q+1,right);
    }
}

int main()
{
    scanf("%d", &count);
    int list[count];
    for(int i = 0; i < count; i++)
    {
      scanf("%d", &list[i]);
    }
    quicksort(list,0,count-1);
    for(int i=0; i<count; i++)
    {
        printf("%d ",list[i]);
    }
    return 0;
}