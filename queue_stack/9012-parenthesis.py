import sys

if __name__ == "__main__":
    T = int(sys.stdin.readline())

    for i in range(T):
        flg = 0
        chk = -1
        ps = sys.stdin.readline()[:-1]
        # print(len(ps))
        for j in ps:
            if j == '(':
                chk += 1
            else:
                chk -= 1
            # print("chk:", chk)
            if chk < -1:
                flg = 1
                break
        if flg == 0 and chk == -1:
            print("YES")
        else:
            print("NO")

