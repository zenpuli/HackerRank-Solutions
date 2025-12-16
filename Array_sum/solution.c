#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    scanf("%d",&n);
    int array_sum=0,a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        array_sum+=a[i];
    }
    printf("%d",array_sum);
}
