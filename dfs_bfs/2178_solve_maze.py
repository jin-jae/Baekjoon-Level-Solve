route = []
cnt = 0

def bfs(maze, start, visited):
    # 이동 방향을 위, 아래, 왼쪽, 오른쪽으로 설정합니다.
    route_x = [0, 0, -1, 1]
    route_y = [-1, 1, 0, 0]

    queue = [start]
    visited[start[0]][start[1]] = True
    
    # 거리를 저장하는 2차원 리스트를 초기화합니다.
    distance = [[0]*len(maze[0]) for _ in range(len(maze))]
    distance[start[0]][start[1]] = 1  # 시작 지점의 거리를 1로 설정합니다.

    while queue:
        x, y = queue.pop(0)

        # 미로의 끝에 도달했는지 확인합니다.
        if x == len(maze) - 1 and y == len(maze[0]) - 1:
            return distance[x][y]  # 최단 거리 반환

        for i in range(4):
            nx, ny = x + route_x[i], y + route_y[i]
            if 0 <= nx < len(maze) and 0 <= ny < len(maze[0]) and not visited[nx][ny] and maze[nx][ny] == 1:
                queue.append((nx, ny))
                visited[nx][ny] = True
                distance[nx][ny] = distance[x][y] + 1
    return distance[x][y]



def run():
    n, m = map(int, input().split(' '))
    maze = [[] for _ in range(n)]
    for i in range(len(maze)):
        tmp = input()
        for t in tmp:
            maze[i].append(int(t))
    # print(maze)
    visited = [[False] * m for _ in range(n)]

    print(bfs(maze, [0, 0], visited))
    # print(cnt)

if __name__ == "__main__":
    run()