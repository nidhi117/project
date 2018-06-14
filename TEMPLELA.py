t = int(input())
for iss in range(t):
    n = int(input())
    a = input().strip()
    b = a.split(' ')
    flag=0
    for i in range(len(b)):
        if i<(n//2)+1:
            if int(b[i])!=i+1:
                flag=1
                break
        else:
             if int(b[i])!=n-i:
                 flag=1
                 break
    if flag==1:
        print("no")
    else:
        print("yes") 
