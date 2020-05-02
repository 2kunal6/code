x=input().split(" ")
ans=x[0]+x[1]
for i in range(len(x[0])):
    t=x[0][:i+1]
    for j in range(len(x[1])):
        t+=x[1][j]
        if(t<ans):
            ans=t
print(ans)
