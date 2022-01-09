a,b = map(int, input().split())
m = a * b
if m % 2 == 0:
    ans = 'No'
else:
    ans = 'Yes'
print(ans)
