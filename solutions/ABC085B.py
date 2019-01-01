from collections import defaultdict

n = int(input())
d = defaultdict(int)
for _ in range(n):
    tmp = int(input())
    d[tmp] += 1

print(len(d.keys()))
