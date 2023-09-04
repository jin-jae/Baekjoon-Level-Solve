import sys


class Queue:
    def __init__(self):
        self.arr = [0] * 2000000
        self.start = 0
        self.end = 0

    def __str__(self):
        return str(self.arr[:10]) + " start: " + str(self.start) + " end: " + str(self.end)

    def push(self, num):
        self.arr[self.end] = num
        self.end += 1

    def pop(self):
        if self.start == self.end:
            return -1
        tmp = self.arr[self.start]
        self.start += 1
        return tmp

    def size(self):
        return self.end - self.start

    def empty(self):
        return 1 if self.size() == 0 else 0

    def front(self):
        if self.start == self.end:
            return -1
        return self.arr[self.start]

    def back(self):
        if self.start == self.end:
            return -1
        return self.arr[self.end - 1]


if __name__ == "__main__":
    N = int(sys.stdin.readline())
    q = Queue()
    for _ in range(N):
        command = sys.stdin.readline().split()
        if command[0] == "push":
            q.push(command[1])
        elif command[0] == "pop":
            print(q.pop())
        elif command[0] == "size":
            print(q.size())
        elif command[0] == "empty":
            print(q.empty())
        elif command[0] == "front":
            print(q.front())
        else:
            print(q.back())
        # print(q)
