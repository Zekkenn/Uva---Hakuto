import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;

public class Main {

    private static final BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
    private static final BufferedWriter out = new BufferedWriter(new OutputStreamWriter(System.out));

    public static void main(String[] args) throws IOException {

        int cases = Integer.parseInt(in.readLine());

        for(int i = 0; i < 3; i++) {
            in.readLine();
        }

        String line = in.readLine().trim();

        for (int i = 0; i < cases; i++) {
            int d = i*4;
            if ( line.charAt(d) == '*' ) out.write("2");
            else if ( line.charAt(d + 1) == '*' ) out.write("1");
            else out.write("3");
        }

        in.readLine();
        out.write("\n");
        out.close();
    }

}
