def is_v(c):
    if(c=='a' or c=='e' or c=='i' or c=='o' or c=='u' or c=='y'):
        return True
    return False

input()
s=list(input())
for i in range(len(s)):
    if(is_v(s[i])):
        for j in range(i+1,len(s)):
            if(is_v(s[j])):
                s[j]=' '
            else:
                break;
for sc in s:
    if(sc!=' '):
        print(sc,end='')
