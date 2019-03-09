#include <stdio.h>

int main()
{
    long long int a[100],n,i,even[100],odd[1000],j,temp,ec=0,oc=0,k=0,l=0;
    printf("Please enter the size of your array:\n");
    scanf("%d",&n);
    
    printf("THANK YOU! :) Please enter the elements of your array:\n");
    for(i = 0 ; i < n ; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\n");
    for(i = 0 ; i < n ; i++)
    {
        if(a[i] % 2 == 0)
        {
            even[k]=a[i];
            ec++;
            k++;
        }
        if(a[i] % 2 == 1)
        {
            odd[l]=a[i];
            oc++;
            l++;
        }
    }
    for (i = 0; i < ec;i++) 
    {
        for (j = i+1; j < ec; j++)
        {
            if (even[i] > even[j]) 
            {
                temp =  even[i];
                even[i] = even[j];
                even[j] = temp;
            }
            
        }
    }
    for (i = 0; i < oc; i++) 
    {
        for (j = i+1; j < oc; j++)
        {
            if (odd[i] < odd[j]) 
            {
                temp =  odd[i];
                odd[i] = odd[j];
                odd[j] = temp;
            }
            
        }
    }
    k=0;l=0;
    for(i=0;i<n;i++)
    {
        if(i % 2 == 0)
        {
            
            a[i]=even[k];
            k++;
        }
        if(i%2 != 0)
        {
            a[i]=odd[l];
            l++;
        }
    }
    for(i=0;i<ec;i++)
    {
        printf("%d ",even[i]);
    }
    printf("\n");
    for(i=0;i<oc;i++)
    {
        printf("%d ",odd[i]);
    }
    printf("\n");
    printf("NOW THE MOST AWAITED OUTPUT IS :\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
 
    
    return 0;
}
