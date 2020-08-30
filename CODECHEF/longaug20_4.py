for _ in range(0,int(input())):
    a=input()
    b=input()
    x=list(a)
    y=list(b)
    for m in y:
        if(m in x):
            x.remove(m)
    x.sort()
    l=0
    n=x.count(y[0])
    for o in range(0,len(y)):
        if(int(ord(y[0]))>int(ord(y[o]))):
            l=1
            break
        elif(ord(y[0])<ord(y[o])):
            l=0
            break
    s0=''
    for w in range(0,n):
        s0=s0+y[0]
    s1=''
    s2=''
    for i in range(0,len(x)):
        if(int(ord(y[0]))>int(ord(x[i]))):
            s1=s1+x[i]
        elif(int(ord(y[0]))<int(ord(x[i]))):
            s2=s2+x[i]
    if(l==1):
        print(s1+b+s0+s2)
    else:
        print(s1+s0+b+s2)
