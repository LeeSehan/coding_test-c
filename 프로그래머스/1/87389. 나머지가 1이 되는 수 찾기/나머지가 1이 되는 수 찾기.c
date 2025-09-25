#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int answer = 0;
    int num = n % 2 == 0 ? 3 : 2;
    do {
        if(n % num == 1) {
            answer = num;
            break;   
        }
        num++;
    } while(answer == 0);
    return answer;
}