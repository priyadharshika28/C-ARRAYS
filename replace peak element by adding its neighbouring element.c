#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[100];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=1;i<n-1;i++){
        if(arr[i]>arr[i-1] && arr[i]>arr[i+1]){
            arr[i] = arr[i-1]+arr[i+1];
        }
    }
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}
