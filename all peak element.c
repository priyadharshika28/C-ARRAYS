#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[100];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int count =0;
    for(int i=0;i<n;i++){
        if(arr[i]>arr[i-1] && arr[i]>arr[i+1]){
            printf("%d ",arr[i]);
        }
    }
}
