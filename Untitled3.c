#include <stdio.h>

long long factorial(int n) {
    long long result = 1;
    int i; 
    for (i = 2; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main() {
    int n;
    scanf("%d", &n);
    if (n < 0) {
        printf("Khong tinh duoc\n");
    }
    else {
        printf("%lld\n", factorial(n));
    }
    return 0;
}
