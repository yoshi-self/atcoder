n = int(input())
s = input().rstrip()

ans = 0
for i in range(1, n):
    l= {}
    r= {}
    count = 0

    for c in range(0, i):
        l[s[c]] = True

    for c in range(i, n):
        r[s[c]] = True

    for c in l.keys():
        if r.get(c, False):
            count += 1
    ans = max(ans, count)

print(ans)
