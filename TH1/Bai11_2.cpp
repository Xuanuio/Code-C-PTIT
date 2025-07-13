#include <stdio.h>

#define print printf

int st[100005]; // Mảng đóng vai trò như stack để xử lý dãy số

int main() {
    int n, sz = 0; // sz là kích thước hiện tại của stack
    scanf("%d", &n); // Nhập số lượng phần tử
    int a[n];
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]); // Nhập mảng a[]
    }

    for (int i = 0; i < n; i++) {
        if (!sz) {
            // Nếu stack đang rỗng thì push phần tử vào
            st[sz++] = a[i];
        } else {
            // Nếu tổng phần tử đỉnh stack và a[i] là chẵn, pop đỉnh stack
            if ((st[sz - 1] + a[i]) % 2 == 0) sz--;
            else
                // Nếu tổng là lẻ, push phần tử a[i] vào stack
                st[sz++] = a[i];
        }
    }

    // In ra số phần tử còn lại
    print("%d\n", sz);

    // // In ra các phần tử còn lại trong stack nếu cần (từ dưới lên trên) 
    // for (int i = 0; i < sz; i++) {
    //     print("%d ", st[i]);
    // }

    return 0;
}
