q=int(input())
mat = [[0]*12 for i in range(1000001)]
for i in range(10):
    mat[i][i]=1
    mat[i][11]=i
for i in range(10,1000001):
    pr=1;
    ints=i
    while ints>1:
        if(ints%10>0):
            pr*=(ints%10)
        ints//=10
    mat[i][mat[pr][11]]=mat[i-1][mat[pr][11]]+1
    mat[i][11]=mat[pr][11]
for i in range(50):
    for j in range(12):
        print(mat[i][j], end=' ')
    print()
for i in range(q):
    s=list(map(int, input().split(' ')))
    print(mat[s[1]][s[2]]-mat[s[0]][s[2]])
