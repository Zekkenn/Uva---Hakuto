import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.util.StringTokenizer;

public class Main {

    private static OutputStreamWriter out = new OutputStreamWriter(System.out);

    public static void main(String[] args) throws IOException {

        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        StringTokenizer st = new StringTokenizer(br.readLine());

        int s = Integer.parseInt(st.nextToken());
        int b = Integer.parseInt(st.nextToken());

        while (s != 0 && b != 0) {
            int[] leftSoldiers = new int[s];
            int[] rightSoldiers = new int[s];

            for (int i = 0; i < s; i++) {
                leftSoldiers[i] = i - 1;
                rightSoldiers[i] = i + 1;
            }

            leftSoldiers[0] = -1; // Not needed but just for clarity
            rightSoldiers[s - 1] = -1;

            while (b > 0) {
                st = new StringTokenizer(br.readLine());
                int l = Integer.parseInt(st.nextToken()) - 1;
                int r = Integer.parseInt(st.nextToken()) - 1;

                int lastLeft = leftSoldiers[l];
                int lastRight = rightSoldiers[r];

                if (leftSoldiers[l] != -1) {
                    rightSoldiers[leftSoldiers[l]] = lastRight;
                }

                if (rightSoldiers[r] != -1) {
                    leftSoldiers[rightSoldiers[r]] = lastLeft;
                }

                String left = lastLeft == -1 ? "*" : ((lastLeft + 1) + "");
                String right = lastRight == -1 ? "*" : ((lastRight + 1) + "");

                out.write(left + " " + right + "\n");
                b--;
            }

            st = new StringTokenizer(br.readLine());
            s = Integer.parseInt(st.nextToken());
            b = Integer.parseInt(st.nextToken());

            out.write("-\n");
        }
        out.close();
        br.close();
    }

}