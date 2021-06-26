#include <bits/stdc++.h>
#include <string.h>
#include <malloc.h>

int arr_max(int *a, int N) {
    int max_arr = -9999;
    for(int i = 0; i < N; ++i)
    if (a[i]>max_arr) max_arr = a[i];
    return max_arr;
}


int max_min_posl(char *a, int n) {

    int *arr = (int *)calloc(n, sizeof(int));
    int count = 0;

    for(int i = 0; i < strlen(a); ++i) {
        if(a[i] - a[i+1] > 0 && a[i+1] != 0) {
            count++;
        }
        else {
            count++;
            arr[i] = count;
            count = 0;
        }
        arr[i+1] = count;

    }
    printf("\n");
    int max = arr_max(arr, n);
    return max;
}

void ticket_of_16(){

    char str[10000];
    printf("String = ");
    gets(str);

    int max = max_min_posl(str, 10000);
    if(max == 1) {
        max = 0;
    }

    printf("Result = %d", max);
}

int main() {
   ticket_of_16();
}
