#include <stdio.h>

int main() {

    int n;
    scanf("%d", &n);
    int n2 = 1;
    for(int i=0; i<n; ++i) {
        for(int j=n2; j>=1; --j) printf("%d", j);
        printf("\n");
        ++n2;
    }

    return 0;

}