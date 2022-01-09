n, a, b = map(int, input().split())

ans = 0

for i in range(1, n + 1):
    num = i
    total = 0
    while True:
        total += num % 10
        num //= 10
        if num == 0:
            break
    if a <= total <= b:
        ans += i

print(ans)
