#include <stdio.h>
int main() {
    int arr[]={3,1,4,1,5,9,2,6,5,3,5};
    int max, s_max;

    if(arr[0]>arr[1]){
        int max=arr[0];
        int s_max=arr[1];
    }
    else{
        int max=arr[1];
        int s_max=arr[0];
    }
    for(int i=2;i<11;i++){
        if(arr[i]>max){
            s_max=max;
            max=arr[i];
        }
        else if(arr[i]>s_max && arr[i]!=max){
            s_max=arr[i];
        }
    }
    printf("The second largest element is %d\n",s_max);
    return 0;
}