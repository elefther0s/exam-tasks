#include "solutions/fibo.h"
#include <stdio.h>

int main() {
//    std::cout << "Hello, World!" << std::endl;
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        printf("%d ", fibonacci(i));
    }
    return 0;
}
