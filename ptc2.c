#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int t;
    if (scanf("%d", &t) != 1) return 0;
    while (t--) {
        int n;
        if (scanf("%d", &n) != 1) return 0;

        long long *a = (long long*) malloc(sizeof(long long) * n);
        long long *b = (long long*) malloc(sizeof(long long) * n);
        if (!a || !b) return 0;

        for (int i = 0; i < n; ++i) scanf("%lld", &a[i]);
        for (int i = 0; i < n; ++i) scanf("%lld", &b[i]);

        int ok = 1;

        for (int i = 0; i < n; ++i) {
            if (b[i] > a[i]) {
                ok = 0;
                break;
            }
        }

        if (!ok) {
            printf("NO\n");
            free(a); free(b);
            continue;
        }

        long long k = -1;
        for (int i = 0; i < n; ++i) {
            if (b[i] > 0) {
                k = a[i] - b[i];
                break;
            }
        }

        if (k == -1) {
            k = 0;
            for (int i = 0; i < n; ++i)
                if (a[i] > k) k = a[i];
        }

        for (int i = 0; i < n; ++i) {
            if (b[i] > 0) {
                if (a[i] - b[i] != k) { ok = 0; break; }
            } else { // b[i] == 0
                if (a[i] > k) { ok = 0; break; }
            }
        }

        printf(ok ? "YES\n" : "NO\n");

        free(a); free(b);
    }
    return 0;
}