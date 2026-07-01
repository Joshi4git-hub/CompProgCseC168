
#include <stdio.h>
void main() {
int arr[50],n,i,j,k,sum=0;
printf("Enter size of array: ");
scanf("%d",&n);
printf("Enter elements: ");
for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
int maxsum=arr[0];
for(i=0;i<n;i++){
    for(j=i;j<n;j++){
        sum=0;
        for(k=i;k<=j;k++){
            sum+=arr[k];}
            if(maxsum<sum)
                maxsum=sum;
    }
}
printf("MaxSum: %d ",maxsum);
}


