#include <stdio.h>
void main() {
int arr[50],i,j,n,sum,maxsum;
printf("Enter size of array: ");
scanf("%d",&n);
printf("Enter elements: ");
for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
maxsum=arr[0];
for(i=0;i<n;i++){
    sum=0;
    for(j=i;j<n;j++){
        sum+=arr[j];
    }
    if(maxsum<sum)
        maxsum=sum;
}
printf("Max sum is: %d",maxsum);
}
