a = int(input())
b = int(input())
c = int(input())
x = int(input())

ans = 0
for ta in range(a + 1):
    for tb in range(b + 1):
        for tc in range(c + 1):
            if 500 * ta + 100 * tb + 50 * tc == x:
                ans += 1

print(ans)
