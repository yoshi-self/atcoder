a, b, k = map(int, input().split())

l = []
for i in range(a, min(a + k, b + 1)):
    if i not in l:
        l.append(i)
for i in range(max(a, b - k + 1), b + 1):
    if i not in l:
        l.append(i)

ans = '\n'.join(map(str, l))
print(ans)
