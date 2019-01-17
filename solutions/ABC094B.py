n, m, x = map(int, input().split())
l = list(map(int, input().split()))
a = {}
for t in l:
    a[t] = 1

total1 = 0
i = x
while i >= 0:
    i -= 1
    total1 += a.get(i, 0)

total2 = 0
i = x
while i <= n:
    i += 1
    total2 += a.get(i, 0)

print(min(total1, total2))
