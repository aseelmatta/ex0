#include <stdio.h>


void powerof(int arr[],int num);

int main(){

    printf("Enter size of input:\n");
    int num;
    scanf("%d",&num);

    if(num<=0){
        printf("Invalid size\n");
        return 0;
    }
    int arr[num];
    printf("Enter numbers:\n");

    for (int i = 0; i < num; ++i) {
        if (scanf("%d", &arr[i]) != 0)continue;
        printf("Invalid number\n");
        return 0;
    }

    powerof(arr,num);

    return 0;
}

void powerof(int arr[],int num){
    int k=0;
    int sum=0;
    for (int i = 0; i < num; ++i) {
        double temp =arr[i];
        while(temp>=1){
            if(temp==1){
                sum+=k;
                printf("The number %d is a power of 2: %d = 2^%d\n",arr[i],arr[i],k);
                break;
            }
            temp=temp/2;
            k++;
        }
        k=0;

    }
    printf("Total exponent sum is %d\n",sum);
}
