s = input().rstrip()
ans = ''
for c in s:
    if c == '1':
        ans += '9'
    else:
        ans += '1'
print(ans)
