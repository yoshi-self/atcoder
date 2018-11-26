import math

a, b = map(int, input().split())
mean = (a + b) / 2
mean = math.ceil(mean)
print(mean)
