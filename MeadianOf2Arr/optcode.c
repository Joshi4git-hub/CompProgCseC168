#include <stdio.h>
int main() {
   int i,j,a[50],b[50],c[50],n,m,k,temp,mid;
   scanf("%d %d",&n,&m);
   for(i=0;i<n;i++)
    scanf("%d",&a[i]);
   for(j=0;j<m;j++)
    scanf("%d",&b[j]);
    i=0,j=0,k=0;
   while(i < n && j < m){
    if(a[i] < b[j])
        c[k++] = a[i++];
    else
        c[k++] = b[j++];
    }
    while(i<n)
        c[k++]=a[i++];
    while(j<m)
        c[k++]=b[j++];
    mid=(n+m)/2;
    if((n+m)%2==0){
        printf("%d",(c[mid]+c[mid-1])/2);
    }
    else{
        printf("%d",c[mid]);
    }   
    return 0;
}
