mb, mg, pg = map(int, input().split())

if(mb + mg) >= pg:
    ans = mg + pg
else:
    ans = (mb + mg + 1) + mg

print(ans)
