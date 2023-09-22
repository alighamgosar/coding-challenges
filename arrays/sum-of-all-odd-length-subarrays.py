def solution(arr):
    s = 0
    for i in range(len(arr)):
        left_count = i + 1
        right_count = len(arr) - i
        s += arr[i] * ((left_count * right_count) // 2 if (left_count * right_count) % 2 == 0 else (left_count * right_count) // 2 + 1)
    return s


solution([1,4,2,5,3])

