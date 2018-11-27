a, b, c, d = map(int, input().split())
l = a + b
r = c + d

if l == r:
    answer = 'Balanced'
elif l > r:
    answer = 'Left'
else:
    answer = 'Right'

print(answer)
