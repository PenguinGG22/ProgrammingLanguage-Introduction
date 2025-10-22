#include <stdio.h>

int main() {

    int arr_test_00[5] = { 8, 9, 10, 8, 7 };
    int arr_test_01[] = { 8, 9, 10, 8, 7 };
    int arr_test_02[5] = { 8 };

    printf("%d %d %d %d %d \n", arr_test_00[0], arr_test_00[1], arr_test_00[2], arr_test_00[3], arr_test_00[4]);
    printf("%d %d %d %d %d \n", arr_test_01[0], arr_test_01[1], arr_test_01[2], arr_test_01[3], arr_test_01[4]);
    printf("%d %d %d %d %d \n", arr_test_02[0], arr_test_02[1], arr_test_02[2], arr_test_02[3], arr_test_02[4]);
    
    return 0;
}