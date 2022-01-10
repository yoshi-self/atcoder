import math

n = int(input())
l = []
ans = -1000

for i in range(n):
    x, y = list(map(int, input().split()))
    l.append([x, y])

for i in range(n):
    for j in range(i + 1, n):
        a = l[i]
        b = l[j]
        length = math.sqrt((b[0] - a[0]) ** 2 + (b[1] - a[1]) ** 2)
        ans = max(ans, length)

print(ans)
