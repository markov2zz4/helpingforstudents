#include <bits/stdc++.h>
#include <string.h>
using namespace std;


int string_arr() {
    int n;
    printf("Enter length of strings = ");
    scanf("%d", &n);
    return n;
}

int column_arr() {
    int k;
    printf("\nEnter length of columns = ");
    scanf("%d", &k);
    return k;
}


void create_array(int *a, int N) {
    for(int i=0; i < N; ++i) {
        a[i] = 100 + rand() % 5101;
    }
}

void print_a(int *a, int n) {
    for(int i = 0; i < n; ++i)
        printf("%d ", a[i]);
}

int arr_min(int *a, int N) {
    int min_arr = 10000;
    for (int i = 0; i < N; i++)
    if (a[i]<min_arr) min_arr=a[i];
    return min_arr;
}

int arr_max(int *a, int N) {
    int max_arr = -9999;
    for(int i = 0; i < N; ++i)
    if (a[i]>max_arr) max_arr = a[i];
    return max_arr;
}


int** create_matrix(int N, int K) {

    int **arr =(int **)malloc(K*sizeof(int*));

    for(int i=0; i < N;++i) {
        arr[i]=(int*)malloc(N*sizeof(int));
        printf("\n");

        for(int j=0; j<K; ++j) {
            arr[i][j] = -10 + rand() % 20;
            printf("%d ", arr[i][j]);
        }
    }

    return arr;
}


int create_string(char *a, int n) {
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

    const int n = 50;
    char str[n];

    printf("String: ");
    gets(str);

    int count = create_string(str, n);
    printf("%d", count);

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

void ticket_of_3() {
    srand(time(NULL));
    const int n = 45;
    int arr[n];

    create_array(arr, n);
    print_a(arr,n);
    int min = arr[0];

    for(int i = 0; i < n; ++i) {
        if(arr[i] < 5000 && arr[i] < min) {
            min = arr[i];
        }
    }
    printf("\nresult is %d", min);
}


void mashe()
{
    srand(time(NULL));
    int i;
    int N=10;
    int arr[N];
    int kol=0;
    for(i=0;i<N;i++) {
        arr[i]=-100+rand()%201;
        printf("%d\n",arr[i]);
    }
    for(i=0;i<N;i++)
    {

        if(arr[i]%3==0||arr[i+1]%3==0) {
            kol++;
            printf("arr[i] = %d\narr[i+1] = %d\n", arr[i], arr[i+1]);
        }
    }
    printf("\nresult is =%d",kol);
}

void z1() {
//---------3---------1-15//
    long res = 1;
    int n = 0;

    srand(time(NULL));


    printf("enter length of array = \n");
    scanf("%d", &n);
    int arr[n] = {0};


    create_array(arr, n);
    print_a(arr, n);


    for(int i=0; i < n; ++i) {
        if(arr[i] %2 == 0 && arr[i]%10 != 0) {
            res *= abs(arr[i]);
        }
    }

    printf("\nres = %d", res);
}

void z2() {
//-----------3--------1-12//
    int res = 0;
    double j = 0;
    int temp = 0;
    int check = 0, n = 0;

    srand(time(NULL));


    printf("enter length of array = \n");
    scanf("%d", &n);
    int arr[n] = {0};


    for(int i=0; i<n; ++i) {
        temp = -2000 + rand() % 4000;
        arr[i] = temp;

        if(arr[i] %2 != 0 && abs(arr[i]) >= 100 && abs(arr[i]) < 1000) {
            res += abs(arr[i]);
            check++;
        }
    }

    print_a(arr, n);
    if (res == 0) {
        printf("\n%2 != 0 and >100 & <1000 is not defined.\n");
    }
    else {
        j = res / double(check);
        printf("\nMiddle ariphmetics = %.2f", j);
    }
}

void z3() {
//-------------3-----------3-2//
    int res = 0;
    int n = 0;

    srand(time(NULL));


    printf("enter length of array = \n");
    scanf("%d", &n);
    int arr[n] = {0};


    create_array(arr, n);
    print_a(arr, n);

    for(int i = 0; i < n; i++) {
        if(arr[i] %3 == 0 || arr[i+1] %3 == 0) {
            res++;
        }
    }
    printf("\nresult = %d", res/2);

}

void z4() {
//--------------3--------------3-7//
    setlocale(LC_ALL, "rus");
    int res = 0;
    int n = 0;

    srand(time(NULL));


    printf("enter length of array = \n");
    scanf("%d", &n);
    int arr[n] = {0};


    create_array(arr, n);
    print_a(arr, n);

    for(int i = 0; i < n; i++) {
        if((arr[i] * arr[i+1]) > 0 && (arr[i] + arr[i+1]) %7 == 0) {
            res++;
            cout << arr[i] <<" "<< arr[i+1] << endl;
        }
    }
    if (res == 0) {
        printf("\nЧисел нет");
    }
    else {
        printf("\nresult = %d", res);
    }


}

void z5() {
    //-----------3---------10-3//
    setlocale(LC_ALL, "rus");
    int res = 0;
    int n = 0;

    srand(time(NULL));


    printf("enter length of array = \n");
    scanf("%d", &n);

    int arr[n] = {0};


    create_array(arr, n);
    print_a(arr, n);

    for(int i=1; i<n; ++i) {
        if(arr[i] > arr[i-1] && arr[i] > arr[i+1]) {
            res++;
        }
    }
    printf("\n%d", res);
}

void z6() {
    //-----------3---------10-3//
    setlocale(LC_ALL, "rus");
    int res = 0;
    int n = 0;

    srand(time(NULL));


    printf("enter length of array = \n");
    scanf("%d", &n);

    int arr[n] = {9, 6, 12, 7, 3, 8};


    //create_array(arr, n);
    print_a(arr, n);

    for(int i=1; i<n; ++i) {
        if(arr[i] < arr[i-1] && arr[i] < arr[i+1]) {
            res++;
        }
    }
    printf("\n%d", res);
}

void z7() {
    //-----------4-----------2//
    setlocale(LC_ALL, "rus");
    int res = 0;
    int n = 0;

    srand(time(NULL));


    printf("enter length of array = \n");
    scanf("%d", &n);

    int arr[n] = {0};


    create_array(arr, n);
    print_a(arr, n);

    int new_arr[n] = {0};
    for(int i=0; i<n; ++i) {
        if(arr[i] < 0) {
            new_arr[i] = arr[i] * -1;
        }
        else {
            new_arr[i] = arr[i] * 1;
        }
    }
    cout << "\n";
    print_a(new_arr, n);
}

void z8() {
    //-----------4-----------3//
    setlocale(LC_ALL, "rus");
    int res = 0;
    int n = 0;

    srand(time(NULL));


    printf("enter length of array = \n");
    scanf("%d", &n);

    int arr[n] = {2, 2, 2, 2, 2, 1, 2, 2, 1, 3, 3, 3};


    //create_array(arr, n);
    print_a(arr, n);

    int new_arr[n] = {0};
    for(int i=0; i<n; ++i) {
        if(arr[i] == arr[i+1]) {
            res++;
            new_arr[i] = res;
        }
        else {
            res = 0;
        }
    }
    int max_posl = -9999;
    res = 0;
    for(int i = 0; i < n; i++) {
        if(new_arr[i] > max_posl) {
            max_posl = new_arr[i];
        }
    }

    cout << "\n";
    printf("result = %d", max_posl + 1);
}

void z9() {
    //-----------4-----------2//
    setlocale(LC_ALL, "rus");
    int res = 0;
    int max_array = -9999;
    int n = 0;

    srand(time(NULL));


    printf("enter length of array = \n");
    scanf("%d", &n);

    int arr[n][n] = {0};
    int new_array[n] = {0};

    for(int i =0; i < n; ++i) {
        for(int j = 0; j < n; ++j) {
            res = -10 + rand() % 20;
            arr[i][j] = res;
        }
    }

    res = 0;

    for(int i =0; i < n; ++i) {
            max_array = -9999;
        for(int j = 0; j < n; ++j) {
            if(arr[i][j] > max_array){
                max_array = arr[i][j];
            }
        }
        new_array[i] = max_array;
    }

    for(int i =0; i < n; ++i) {
        printf("\n");
        for(int j = 0; j < n; ++j) {
            printf("%d ", arr[i][j]);
        }
    }

    //print_a(arr, n);

    res = 0;
    for(int k = 0; k < n; ++k) {
        res += new_array[k];
    }
    printf("\n\n");
    printf("result = %d", res);
}

void z10() {
    //-----------4-----------5//
    setlocale(LC_ALL, "rus");
    int res = 0;
    int n, k;
    int random_num = 0;
    long int min_array = 1000000;

    srand(time(NULL));


    printf("Enter length of array\n");
    scanf("%d", &n);
    scanf("%d", &k);

    int arr[n][k] = {0};

    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < k; ++j) {
            random_num = -10 + rand() % 20;
            arr[i][j] = random_num;
        }
    }

    for(int i = 0; i < n; ++i) {
        printf("\n");
        for(int j = 0; j < k; ++j) {
            printf("%d ", arr[i][j]);
        }
    }

    int new_arr[n] = {-20};

    for(int i = 0; i < n; ++i) {
        res = 0;
        for(int j = 0; j < k; ++j) {
            res += arr[i][j];
        }
        new_arr[i] = res;
    }

    res = 0;
    for(int i = 0; i < n; ++i) {
        if(new_arr[i] < min_array) {
            min_array = new_arr[i];
            res++;
        }
    }

    printf("\n\nMinimum amount = %d\nIndex of string = %d", min_array, res);
}

void z11() {
        //-----------4-----------7//
    setlocale(LC_ALL, "rus");
    int res = 0;
    int n;
    int random_num = 0;
    int min_array = -99999;
    double mar = 0;
    int finder = 0;

    srand(time(NULL));


    printf("Enter length of array\n");
    scanf("%d", &n);

    int arr[n] = {0};

    create_array(arr, n);
    print_a(arr, n);

    for(int i = 0; i < n; ++i) {
        res += arr[i];
    }
    mar = res / double(n);
    printf("\nmar = %.2f", mar);

    finder = 99999;

    for(int i = 0; i < n; ++i) {
        if(abs(int(mar) - arr[i]) < finder) {
            finder = abs(int(mar) - arr[i]);
            res = i;
        }
    }

    printf("\ncount of element = %d", res+1);

}

int main() {
   mashe();
}
