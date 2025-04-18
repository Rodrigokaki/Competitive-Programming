import sys

def is_non_decreasing(arr):
    for i in range(len(arr)-1):
        if arr[i] > arr[i+1]:
            return False
    return True

def solve():
    t = 1
    for _ in range(t):
        n = int(input())
        a = list(map(int, input().split()))

        # Process from right to left
        arr = a.copy()
        for i in range(n-2, -1, -1):
            if arr[i] > arr[i+1]:
                m = min(arr[i], arr[i+1])
                arr[i] -= m
                arr[i+1] -= m
        
        if is_non_decreasing(arr):
            print("YES")
            continue
        
        print("NO")

if __name__ == "__main__":
    solve()