#include<stdio.h>
#include<stdlib.h>
int main(){
    int n,d,temp=0;
    scanf("%d",&n);
    int a[n];
    int sol[n];
    scanf("%d",&d);
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    int t=0;
    
    while(d--){
        int temp=a[0];
        for(int i=0;i<n-1;i++){
        a[i]=a[i+1];    
    }
    a[n-1]=temp;
    }
    for(int i=0;i<n;i++)
        printf("%d ",a[i]);
}
