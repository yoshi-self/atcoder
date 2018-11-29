_ = int(input())
l = list(map(int, input().split()))

ans = 10 ** 9

for n in l:
    count = 0
    while n % 2 == 0:
        n //= 2
        count += 1
    ans = min(ans, count)

print(ans)
