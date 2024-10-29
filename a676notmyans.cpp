//https://zerojudge.tw/ShowProblem?problemid=a676
//ans:https://blog.csdn.net/primoblog/article/details/8814863?utm_medium=distribute.pc_relevant.none-task-blog-2~default~baidujs_baidulandingword~default-4-8814863-blog-76299680.235^v43^pc_blog_bottom_relevance_base4&spm=1001.2101.3001.4242.3&utm_relevant_index=7
#include <bits/stdc++.h>
using namespace std;

int n, s[25], a[25], f[25];

int solve() {
    int ans, max = 0;
    for (int i = n; i >= 1; i--) {
        ans = 0;
        for (int j = i + 1; j <= n; j++) {
            if (a[i] < a[j]) 
                ans = ans < f[j] ? f[j] : ans;
        }
        f[i] = ans + 1;
        max = max < f[i] ? f[i] : max;
    }
    return max;
}

int main() {
    int tt;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        scanf("%d", &tt);
        s[i] = tt;
    }
    
    while (1) {
        for (int i = 1; i <= n; i++) {
            if (scanf("%d", &tt) == EOF) return 0;
            a[tt] = s[i];
        }
        printf("%d\n", solve());
    }
    return 0;
}
