import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;

public class Main {

    private static final BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
    private static final BufferedWriter out = new BufferedWriter(new OutputStreamWriter(System.out));

    public static void main(String[] args) throws IOException {

        String line = in.readLine().trim();

        while (!line.equals("END")) {

            if (line.equals("1")) out.write(line + "\n");
            else {
                int i = 1, n = line.length();
                while ( n != 1 ) {
                    n = String.valueOf(n).length();
                    i++;
                }
                out.write((i + 1) + "\n");
            }
            line = in.readLine().trim();
        }
        out.close();
    }

}
