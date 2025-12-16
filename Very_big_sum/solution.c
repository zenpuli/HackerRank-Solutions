#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    scanf("%d",&n);
    long int a[n],array_sum=0;
    for(int i=0;i<n;i++){
        scanf("%ld",&a[i]);
        array_sum+=a[i];
    }
    printf("%ld",array_sum);
}
