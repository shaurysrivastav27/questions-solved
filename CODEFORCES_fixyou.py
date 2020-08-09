for _ in range(0,int(input())):
    li1=input()
    li=li1.split()
    n=int(li[0])
    m=int(li[1])
    a=[]
    for k in range(0,n):
        s=input()
        x=list(s)
        a.append(x)
    l=0
    for i in range(0,n):
        if(a[i][m-1]=='R'):
            l=l+1
    for j in range(0,m):
        if(a[n-1][j]=='D'):
            l=l+1
    print(l)
    
