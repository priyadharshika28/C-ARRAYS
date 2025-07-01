#include<stdio.h>
int main(){
    int n;
    int k;
    int arr[100];
    scanf("%d",&n);
    scanf("%d",&k);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int j;
    for(int i=0;i<=k;i++){
        int temp = arr[n-1];
        for(j=n-1;j>=1;j--){
            arr[j] =arr[j-1];
        }
        arr[j] = temp;
    }
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}
