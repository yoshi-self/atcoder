l = list(map(int, input().split()))
k = int(input())
l.sort(reverse=True)
ans = l[0] * (2 ** k) + l[1] + l[2]
print(ans)
