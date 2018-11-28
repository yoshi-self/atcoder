def lucas(n):
    if n == 0:
        return 2
    if n == 1:
        return 1
    current = 0
    n_1 = 1
    n_2 = 2
    for i in range(n - 1):
        current = n_1 + n_2
        n_2 = n_1
        n_1 = current
    return current

n = int(input())
print(lucas(n))
