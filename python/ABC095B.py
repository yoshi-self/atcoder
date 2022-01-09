n, x = map(int, input().split())
l = []
for _ in range(n):
    l.append(int(input()))

total = 0
for p in l:
    total += p

left = x - total
ans = len(l) + left // sorted(l)[0]
print(ans)
