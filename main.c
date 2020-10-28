#include <stdio.h>

int main(){
    int arr[10];

    for(int i = 0; i < 10; i++){
        if(i % 2 == 0)
            arr[i] = 0;
        else
            arr[i] = 1;
        if(i == 4)
            arr[i] = 3;
        if(i == 5)
            arr[i] = 2;
    }

    int i = 0;
    while(i < 10){
        printf("%d", arr[i]);
        i++;
    }

    return 0;
}
