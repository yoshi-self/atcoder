l = [int(n) for n in input().split()]
m = max(l)
mi = l.index(m)
ans = 0
for i in range(len(l)):
    if i == mi:
        ans += l[i] * 10
    else:
        ans += l[i]
print(ans)
