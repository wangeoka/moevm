#include <stdio.h>
#include "index_first_zero.h"
#include "index_last_zero.h"
#include "sum_between.h"
#include "sum_before_and_after.h"
#define N 100

int main(){
        int key, array_size;
        int array[N];
        char space = ' ';
        array_size = 0;
        scanf("%d", &key);
        while(array_size < N && space == ' '){
                scanf("%d%c", &array[array_size], &space);
                array_size++;
        }
        switch(key){
            case 0:
                    printf("%d\n", index_first_zero(array, array_size));
                    break;
            case 1:
                    printf("%d\n", index_last_zero(array, array_size));
                    break;
            case 2:
                    printf("%d\n", sum_between(array, array_size));
                    break;
            case 3:
                    printf("%d\n", sum_before_and_after(array, array_size));
                    break;
            default:
                    printf("Данные некорректны\n");
                    break;
        }
        return 0;
}

