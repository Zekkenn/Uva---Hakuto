import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.util.StringTokenizer;

public class Main {

    public static void main(String[] args) throws IOException {

        BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
        OutputStreamWriter out = new OutputStreamWriter(System.out);

        int cases = Integer.parseInt(in.readLine());

        StringTokenizer st;
        for (int i = 1; i <= cases; i++) {

            st = new StringTokenizer(in.readLine());
            int n = Integer.parseInt(st.nextToken()), l = Integer.parseInt(st.nextToken());

            StringTokenizer q = new StringTokenizer(in.readLine());
            StringTokenizer c = new StringTokenizer(in.readLine());

            int totalEaten = 0;
            boolean canEat = true;
            for (int mango = 0; mango < n && canEat; mango++) {

                int totalMango = Integer.parseInt(q.nextToken());
                int cap = Integer.parseInt(c.nextToken());

                totalEaten += totalMango;
                canEat &= totalMango <= cap && totalEaten <= l;
            }
            out.write(String.format("Case %d: %s\n", i, canEat ? "Yes" : "No"));
        }

        out.close();

    }

}
