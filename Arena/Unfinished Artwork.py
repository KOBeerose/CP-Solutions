def dfs(n):
	vis[n]=1
	for i in range (len(vis

n=int(input())
m=int(input())
for i in range(m):
	a=int(input())
	b=int(input())
	a.append(b)
	b.append(a)
sol = 0
for i in range(n+1):
	if (vis[i]==0):
		dfs(i)
		sol++;
print(sol-1)