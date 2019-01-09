from collections import defaultdict

n = int(input())
s = defaultdict(int)
for _ in range(n):
    s[input().rstrip()] += 1

m = int(input())
t = defaultdict(int)
for _ in range(m):
    t[input().rstrip()] += 1

ans = 0
for w in s.keys():
    tmp = s[w] - t[w]
    ans = max(ans, tmp)

print(ans)
