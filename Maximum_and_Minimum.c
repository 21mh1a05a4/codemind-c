#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int arr[a],i,j;
    for (i=0; i<a; i++)
    {
        scanf("%d",&arr[i]);
    }
    int max=arr[0],min=arr[0],c=0,count=0;
    for (i=0; i<a; i++)
    {
        count=1;
        for (j=0; j<a; j++)
        {
            if (i!=j)
            {
                if (arr[i]==arr[j] && arr[i]!=-1)
                {
                    arr[j]=-1;
                    count++;
                }
            }
        }
        if (count==arr[i])
        {
            if (max<arr[i])
            {
                max=arr[i];
            }
            if (min>arr[i])
            {
                min=arr[i];
            }
            c++;
        }
    }
    if (c==0)
    {
        printf("-1");
    }
    else
    {
        printf("%d %d",min,max);
    }
    return 0;
}