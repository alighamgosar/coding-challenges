#include <iostream>
#include <vector>

int solution(std::vector<int> arr) {
    int s = 0;
    for (int i = 0; i < arr.size(); i++) {
        int left_count = i + 1;
        int right_count = arr.size() - i;
        s += arr[i] * (((left_count * right_count) % 2 == 0) ? (left_count * right_count) / 2 : (left_count * right_count) / 2 + 1);
    }
    return s;
}

int main() {
    std::vector<int> arr = {1, 4, 2, 5, 3};
    int result = solution(arr);
    std::cout << "Result: " << result << std::endl;
    return 0;
}
