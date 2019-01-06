n = int(input())
l = input().rstrip().split()
d = {}
for c in l:
    d[c] = True

if d.get('Y', False):
    print('Four')
else:
    print('Three')
