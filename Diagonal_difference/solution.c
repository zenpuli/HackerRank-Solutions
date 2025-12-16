#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
    int left_diagonal=0,right_diagonal=0,n;
    scanf("%d",&n);
    int a[n][n];
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            scanf("%d",&a[i][j]);
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j)
                left_diagonal+=a[i][j];
        }
    }
    int i=0,j=n-1;
    while(i<n && j>=0){
                right_diagonal+=a[i][j];
                i++;
                j--;
            }
    int difference=abs(left_diagonal-right_diagonal);
    printf("%d",difference);
}
