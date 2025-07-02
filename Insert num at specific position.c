#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int pos;
    scanf("%d",&pos);
    int num;
    scanf("%d",&num);
    for(int i=n;i>=pos;i--){
        arr[i]=arr[i-1];
    }
    arr[pos-1]=num;
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}
