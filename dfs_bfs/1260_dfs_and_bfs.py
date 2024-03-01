dfs_ans = []
bfs_ans = []

def dfs(graph, v, visited):
    visited[v] = True
    dfs_ans.append(v)

    for i in graph[v]:
        if not visited[i]:
            dfs(graph, i, visited)

def bfs(graph, v, visited):
    queue = [v]
    visited[v] = True

    while queue:
        v = queue.pop(0)
        bfs_ans.append(v)

        for i in graph[v]:
            if not visited[i]:
                queue.append(i)
                visited[i] = True

def main():
    n, m, v = map(int, input().split(' '))
    graph = [[] for i in range(n + 1)]
    nodes = [list(map(int, input().split(' '))) for i in range(m)]

    for node in nodes:
        graph[node[0]].append(node[1])
        graph[node[1]].append(node[0])
    
    for i in range(len(graph)):
        graph[i].sort()
        
    # print(graph)
    # print()

    visited = [False] * (n + 1)
    dfs(graph, v, visited)

    visited = [False] * (n + 1)
    bfs(graph, v, visited)

    for i, d in enumerate(dfs_ans):
        if not i == len(dfs_ans) - 1:
            print(d, end=' ')
        else:
            print(d)
    for i, b in enumerate(bfs_ans):
        if not i == len(bfs_ans) - 1:
            print(b, end=' ')
        else:
            print(b)

if __name__ == "__main__":
    main()
