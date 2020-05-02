input()
a=list(map(int, input().split()))
ans="NO"
for i in range(len(a)):
    if(a[a[a[i]-1]-1]==i+1):
        ans="YES"
        break
print(ans)
