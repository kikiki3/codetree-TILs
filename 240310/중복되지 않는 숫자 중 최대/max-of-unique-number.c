#include <stdio.h>

#define MAX_N 1000 //입력값 N의 최대값

int main() {
    int n, nums[MAX_N];

    //입력
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    //최댓값 찾기
    int max = -1;
    for (int i = 0; i < n; i++) {
        int curr_num = nums[i];
        //최대가 될 수 있는 후보입니다.
        if (max < curr_num) {
            //갱신할 수 있는지 확인하기 위해
            int count = 0;
            for (int j = 0; j < n; j++) {
                if (nums[j] == curr_num) {
                    count++;
                }
            }

            if (count == 1) {
                max = curr_num;
            }
        }
    }

    printf("%d", max);
}