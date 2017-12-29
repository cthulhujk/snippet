#include <iostream>
#include <vector>
#include <algorithm>
#include <memory>

bool permutation_std(int n);
bool permutation(int n);
static void permutation_impl(std::vector<int> arr, int n, int cur);

#ifdef _MSC_VER

#pragma region permutation_std
bool permutation_std(int n) {
    if (n < 0) {
        return false;
    }
    std::shared_ptr<int> p2arr(new int[n], [](int *elems)->void { delete[] elems; });
    for (int i = 0,j=1; i < n; i++) {
        p2arr.get()[i] = j++;
    }
    do {
        for (int i = 0; i < n; i++) {
            std::cout << p2arr.get()[i] << " ";
        }
        std::cout << "\n";
    } while (std::next_permutation(p2arr.get(), p2arr.get() + n));

    return true;
}

#pragma endregion permutation_std

#pragma region permutation_recursion
bool permutation(int n) {
    if (n < 0) {
        return false;
    }

    for (int i = 1; i <= n; i++) {
        permutation_impl(std::vector<int>(), n, i);
    }
    return true;
}

static void permutation_impl(std::vector<int> arr, int n, int cur) {
    arr.push_back(cur);

    if (arr.size() == n) {
        
        for (auto x : arr) {
        std::cout << x << " ";
        }
        std::cout << "\n";
        
        return;
    }

    for (int i = 1; i <= n; i++) {
        if (std::find(arr.cbegin(), arr.cend(), i) == arr.cend()) {
            permutation_impl(arr, n, i);
        }
    }
}
#pragma endregion permutation_recursion

int main() {
    std::ios::sync_with_stdio(false);
    std::cout << "recursive implementation:\n";
    permutation(6);
    std::cout << "use std implementation:\n";
    permutation_std(7);
    system("pause");
    return 0;
}
#else
#error "support msvc compiler only"
}
#endif // _MSC_VER
