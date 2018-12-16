l = list(map(int, input().split()))
l.sort()
prev = l[0]
total = 0
for n in l:
    total += abs(n - prev)
    prev = n
print(total)
