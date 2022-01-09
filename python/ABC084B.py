import re

a, b = map(int, input().split())
s = input().rstrip()

p = "[0-9]{%d}-[0-9]{%d}" % (a, b)

m = re.match(p, s)
if m:
    print('Yes')
else:
    print('No')
