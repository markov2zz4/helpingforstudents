#include <bits/stdc++.h>
#include <string.h>

int arr_max(int *a, int N) {
    int max_arr = -9999;
    for(int i = 0; i < N; ++i)
    if (a[i]>max_arr) max_arr = a[i];
    return max_arr;
}

int create_string(char *a,  int n) {
    int count = 0;
    int arr[n] = {0};

    for(int i=0; i < strlen(a); ++i) {
        if(a[i] != 'C' && a[i] != 'F') {
            count++;
        }
        else {
            arr[i] = count;
            count = 0;
        }
        arr[i] = count;

    }
    count = arr_max(arr, n);
    return count;
}


void ticket_of_17() {
    srand(time(NULL));

    const int n = 50;
    char str[n];

    printf("String: ");
    gets(str);

    int count = create_string(str, n);
    printf("%d", count);
}

int main() {
  ticket_of_17();
  _getch();
  return 0;
}
