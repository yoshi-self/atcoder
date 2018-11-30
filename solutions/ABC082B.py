s = input().rstrip()
t = input().rstrip()
s = sorted(s)
t = sorted(t, reverse=True)
if s < t:
    print('Yes')
else:
    print('No')
