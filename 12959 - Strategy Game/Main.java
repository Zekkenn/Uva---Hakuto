import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.util.StringTokenizer;
import java.util.stream.Stream;

public class Main {

    public static void main(String[] args) throws IOException {

        BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
        OutputStreamWriter out = new OutputStreamWriter(System.out);

        StringTokenizer st;
        String line = in.readLine();

        while (line != null) {

            st = new StringTokenizer(line);

            int players = Integer.parseInt(st.nextToken()), rounds = Integer.parseInt(st.nextToken());

            int[] points = new int[players * rounds + 10];

            st = new StringTokenizer(in.readLine());
            for (int i = 0; i < players * rounds; i++) {
                points[i] = Integer.parseInt(st.nextToken());
            }

            int maxPoints = -1, winner = -1;
            for (int i = 0; i < players; i++) {
                int total = 0;
                for (int k = 0; k < rounds; k++) {
                    int j = i + players * k;
                    total += points[j];
                }

                if (total >= maxPoints) {
                    maxPoints = total;
                    winner = i + 1;
                }
            }

            out.write(winner + "\n");

            line = in.readLine();
        }

        out.close();
    }

}
