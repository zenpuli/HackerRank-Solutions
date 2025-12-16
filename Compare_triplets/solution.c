#include<stdio.h>
#include<stdlib.h>
int main(){
    int a[3],b[3],alice=0,bob=0;
    for(int i=1;i<=3;i++)
        scanf("%d",&a[i]);
    for(int i=1;i<=3;i++)
        scanf("%d",&b[i]);
    for(int i=1;i<=3;i++){
        if(a[i]>b[i])
            alice++;
        else if(a[i]<b[i])
            bob++;
        else{
            alice+=0;
            bob+=0;
        }
    }
    
        printf("%d %d",alice,bob);
}
