N, M = map(int, input().split())
ans = [-1] * N

for _ in range(M):
    s, c = map(int, input().split())
    s -= 1
    if (s == 0 and c == 0) or (ans[s] != -1 and ans[s] != c):
        print(-1)
        exit()
    if ans[s] == -1 or ans[s] == c:
        ans[s] = c

if ans[0] != -1:
    [print(ans[i], end="") if ans[i] != -1 else print(0, end="") for i in range(N)]
else:
    print(-1)