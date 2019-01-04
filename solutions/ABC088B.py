n = int(input())
l = list(map(int, input().split()))
l.sort(reverse=True)

alice = 0
bob = 0

for i in range(0, n, 2):
    alice += l[i]

for i in range(1, n, 2):
    bob += l[i]

print(alice - bob)
