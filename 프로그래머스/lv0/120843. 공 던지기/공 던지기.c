#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// numbers_len은 배열 numbers의 길이입니다.
int solution(int numbers[], size_t numbers_len, int k) {
    int answer = 0;
    
    int length = (k-1) * 2;
    answer= (length % numbers_len)+1;
    return answer;
}