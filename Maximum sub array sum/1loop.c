#include <stdio.h>
/*Kadane's Algorithm*/
void main() {
int arr[50],i,j,n,sum,maxsum;
printf("Enter size of array: ");
scanf("%d",&n);
printf("Enter elements: ");
for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
sum=0;
maxsum=arr[0];
for(i=0;i<n;i++){
    if (sum + arr[i] > arr[i])
        sum+=arr[i];
    else 
        sum=arr[i];
    if(maxsum<sum)
        maxsum=sum;
}
printf("Max sum is:%d",maxsum);
}
