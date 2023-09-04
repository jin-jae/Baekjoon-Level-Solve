import sys

if __name__ == "__main__":
    N = int(input())
    stack = [0] * 10000
    index = -1

    for i in range(N):
        command = sys.stdin.readline().split()
        if command[0] == "push":
            index += 1
            stack[index] = int(command[1])
        elif command[0] == "pop":
            if index < 0:
                print(-1)
            else:
                print(stack[index])
                index -= 1
        elif command[0] == "size":
            print(index + 1)
        elif command[0] == "empty":
            print(1) if index < 0 else print(0)
        elif command[0] == "top":
            if index < 0:
                print(-1)
            else:
                print(stack[index])

        # print(stack[:10])
        # print(index)
