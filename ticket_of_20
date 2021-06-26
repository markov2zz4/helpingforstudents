#include <bits/stdc++.h>
#include <string.h>
using namespace std;


void create_array(int *a, int N) {
    for(int i=0; i < N; ++i) {
        a[i] = 100 + rand() % 5101;
    }
}

int min_posl(int *a, int K) {
    int b[K*2] = {0};
    int posl[K*2] = {0};

    int count = 0;
    int sum = 0;
    int max_arr = posl[0];
    int counter = 0;

    for(int i = 0; i < K; i+=2) {

        if(a[i] > a[i+1]) {
            sum += a[i];
            sum += a[i+1];
            count++;
        }
        else {
            sum+=a[i];
            count++;
            posl[i] = count;
            b[i] = sum;
            count = 0;
            sum = 0;
        }
    }

    for(int i = 0; i < K; ++i) {
        if(posl[i] > max_arr) {
            max_arr = posl[i];
            sum = b[i];
        }
    }
    return sum;
}

void ticket_of_20() {
    const int n = 30;
    int arr[n];
    create_array(arr, n);
    int sum = min_posl(arr, n);
    printf("\nsum = %d", sum);
}

int main() {
  ticket_of_20();
  _getch();
  return 0;
  
}
