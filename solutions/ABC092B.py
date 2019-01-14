n = int(input())
d, x = map(int, input().split())
a = [int(input()) for _ in range(n)]

eat = 0
for i in range(n):
    day = 1
    while day <= d:
        eat += 1
        day += a[i]

ans = eat + x
print(ans)
