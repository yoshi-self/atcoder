a, b = map(int, input().split())
n = int('%d%d' % (a, b))
ans = 'No'
for i in range(n // 2):
    if i ** 2 == n:
        ans = 'Yes'

print(ans)
