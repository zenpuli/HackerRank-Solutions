#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n],reverse[n];
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    int j=0;
    for(int i=n-1;i>=0;i--){
        reverse[j]=a[i];
        j++;
    }
    for(int i=0;i<n;i++)
        printf("%d ",reverse[i]);
}
