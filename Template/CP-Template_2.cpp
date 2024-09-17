#include <bits/stdc++.h>
using namespace std;

template <typename T>
void print(T t) {
    std::cout << t << std::endl;
}

template <typename T, typename... Args>
void print(T t, Args... args) {
    std::cout << t << " ";
    print(args...);
}

void printa(const vector<int>& arr) {
    for (auto i : arr) {
        cout << i << " ";
    }
    cout << endl;  // For a new line after printing the vector
}

class Solution {
   public:
    void solve() {
        // Write your code here.
        vector<int> arr = {2, 5, 2, 6, 3};

        print("arr size = ", arr.size());
        print("arr capacity = ", arr.capacity());
        cout << "before mod";
        printa(arr);
        cout << "after mod";
        arr.push_back(7);
        printa(arr);
        cout << "after mod";
        arr.pop_back();
        printa(arr);
    }
};

auto init = []() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    return 0;
}();

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;  // test cases
    // cin >> t;

    Solution sol;
    while (t--)
        sol.solve();

    return 0;
}