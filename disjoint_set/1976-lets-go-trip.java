import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

class Main {

    static int find(int[] parent, int a) {
        if (parent[a] == -1)    return a;

        int v = a;
        while (parent[a] != -1) {
            a = parent[a];
        }

        int tmp;
        while (parent[v] != a) {
            tmp = parent[v];
            parent[v] = a;
            v = tmp;
        }

        return a;
    }

    static void union(int[] parent, int a, int b) {
        int aa = find(parent, a);
        int bb = find(parent, b);

        if (aa > bb)
            parent[bb] = aa;
        else if (aa < bb)
            parent[aa] = bb;
    }

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());
        int n = Integer.parseInt(st.nextToken());
        StringTokenizer st2 = new StringTokenizer(br.readLine());
        int m = Integer.parseInt(st2.nextToken());

        int[][] map = new int[n][n];
        for (int i = 0; i < n; i++) {
            StringTokenizer st3 = new StringTokenizer(br.readLine());
            for (int j = 0; j < n; j++) {
                map[i][j] = Integer.parseInt(st3.nextToken());
            }
        }

        // for (int i = 0; i < n; i++) {
        //     for (int j = 0; j < n; j++) {
        //         System.out.println(map[i][j]);
        //     }
        // }

        int[] mapParent = new int[n];
        for (int i = 0; i < n; i++)
            mapParent[i] = -1;

        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (map[i][j] == 1)
                    union(mapParent, i, j);
            }
        }
        // System.out.print("done parent: ");
        // for (int i = 0; i < mapParent.length; i++)
        //     System.out.print(mapParent[i] + " ");
        // System.out.println();

        StringTokenizer st4 = new StringTokenizer(br.readLine());
        int[] route = new int[m];
        for (int j = 0; j < m; j++) {
            route[j] = Integer.parseInt(st4.nextToken());
        }

        int chk = find(mapParent, route[0] - 1);
        for (int j = 1; j < m; j++) {
            if (find(mapParent, route[j] - 1) != chk) {
                System.out.println("NO");
                return;
            }
        }
        System.out.println("YES");
        return;
    }
}
