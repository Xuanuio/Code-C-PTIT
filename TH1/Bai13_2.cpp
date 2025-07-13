#include<stdio.h>
#include<stdlib.h>

#define ll long long
#define print printf

ll a[100005]; // Mảng chứa các số có dạng 2^i * 3^j * 5^k
int cnt = 0;  // Số lượng phần tử trong mảng a

// Hàm so sánh dùng cho qsort để sắp xếp tăng dần
int cmp(const void *x, const void *y){
    ll a = *(ll*) x;
    ll b = *(ll*) y;
    if(a < b) return -1;
    if(a > b) return 1;
    return 0;
}

// Hàm tìm kiếm nhị phân để kiểm tra x có trong mảng a hay không
int bin_search(ll x){
    int l = 0, r = cnt - 1;
    while(l <= r){
        int m = (l + r) / 2;
        if(a[m] == x) return m;      // Tìm thấy => trả về chỉ số
        if(a[m] < x) l = m + 1;      // Tìm bên phải
        else r = m - 1;              // Tìm bên trái
    }
    return -1; // Không tìm thấy
}

// Hàm sinh các số có dạng 2^i * 3^j * 5^k <= 1e18 và lưu vào mảng a
void generate(){
    a[cnt++] = 1; // Bắt đầu từ số 1

    for(int i = 0; i < 60; i++){ // Lũy thừa của 2
        ll p2 = 1LL << i; // p2 = 2^i
        if(p2 > 1e18) break;

        for(int j = 0; j < 38; j++){ // Lũy thừa của 3
            ll p3 = 1;
            for(int jj = 0; jj < j; jj++) p3 *= 3;
            if(p2 * p3 > 1e18) break;

            for(int k = 0; k < 26; k++){ // Lũy thừa của 5
                ll p5 = 1;
                for(int kk = 0; kk < k; kk++) p5 *= 5;

                ll num = p2 * p3 * p5;
                if(num > 1e18) break;

                // Nếu num chưa có trong mảng thì thêm vào
                if(bin_search(num) == -1)
                    a[cnt++] = num;
            }
        }
    }

    // Sắp xếp mảng tăng dần để phục vụ tìm kiếm nhị phân
    qsort(a, cnt, sizeof(ll), cmp);
}

int main() {
    generate(); // Sinh dãy số trước khi xử lý truy vấn

    int t;
    scanf("%d", &t); // Đọc số lượng test

    while(t--){
        ll n;
        scanf("%lld", &n); // Đọc số cần kiểm tra

        int idx = bin_search(n); // Tìm n trong dãy đã sinh
        if(idx == -1)
            print("Not in sequence\n"); // Không tìm thấy
        else
            print("%d\n", idx); // In ra vị trí của n trong dãy
    }
}
