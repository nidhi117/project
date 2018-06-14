for i in range(int(input())):
    x=input('')
    s=list(x)
    sn=0
    mg=0
    for j in range(len(s)):
        if s[j]=='m':
            mg+=1
 
        if j!=0 and s[j]=='m':
            if s[j-1]=='s':
                s[j-1]='a'
                continue
        if j!=len(s)-1 and s[j]=='m':
            if s[j+1]=='s':
                s[j+1]='a'
 
    for k in range(len(s)):
        if s[k]=='s':
            sn+=1
    if sn>mg:
        print("snakes")
    elif mg>sn:
        print("mongooses")
    else:
        print("tie") 
