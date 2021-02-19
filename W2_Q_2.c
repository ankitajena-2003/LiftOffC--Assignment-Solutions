#include <stdio.h>
void  main()
 {
     int arr[10],sum1=0,sum2=0,n,i;
     printf("\n enter number of elements in the spray:");
     scanf("%d" ,&n);
     if(n>10)
     n=10;
     printf("\n enter the array elements:");
     for(i=0;i<n;i++)
     {
         scanf("%d" ,&arr[i]);

     }
     for(i=0;i<n;i++)
     {
         if(arr[i]%2==0)
         sum1+=arr[i];
         else if(i%2==0)
         sum2+=arr[i];

     }
     printf("sum of even elements are:%d \n" ,sum1);
     printf ("sum of even position elements are:%d \n",sum2);


}
