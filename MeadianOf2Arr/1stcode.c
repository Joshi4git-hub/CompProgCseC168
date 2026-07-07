
#include <stdio.h>
int main() {
   int i,j,a[50],b[50],c[50],n,m,temp,mid;
   scanf("%d %d",&n,&m);
   for(i=0;i<n;i++){
    scanf("%d",&a[i]);
    c[i]=a[i];}
   for(j=0;j<m;j++){
    scanf("%d",&b[j]);
    c[n+j]=b[j];}
    for(i=0;i<n+m;i++){
        for(j=i+1;j<n+m;j++){
        if(c[i]>c[j]){
            temp=c[i];
            c[i]=c[j];
            c[j]=temp;
        }}}
    mid=(n+m)/2;
    if((n+m)%2==0){
        printf("%d",c[mid]+c[mid-1]);
    }
    else{
        printf("%d",c[mid]);
    }   
    return 0;
}
