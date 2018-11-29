n = input().rstrip()

digit_sum = 0
for c in n:
    digit_sum += int(c)

n = int(n)
if  n % digit_sum == 0:
    ans = 'Yes'
else:
    ans = 'No'

print(ans)

