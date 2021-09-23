A=[]
G=[]
q=int(input())
for i in range(q):
    line=input().split()
    if line[0]=='A':
        A.append(line[1])
    else:
        G.append(line[1])
A=sorted(list(set(A)))
def parts(A,p):
    back=[]
    n=len(p)
    for e in A:
        if e[:n]==p:
            back.append(e)
    return back
for e in G:
    print(" ".join(parts(A,e)))