import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.util.Objects;

public class Main {

    public static void main(String[] args) throws IOException {

        BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
        OutputStreamWriter out = new OutputStreamWriter(System.out);

        String line;

        while ((line = in.readLine()) != null) {

            String[] firstPlug = line.split(" ");
            String[] secondPlug = in.readLine().split(" ");
            boolean compatible = true;
            for (int i = 0; i < 5; i++) {
                compatible &= !Objects.equals(firstPlug[i], secondPlug[i]);
            }

            out.write(compatible ? "Y" : "N");
            out.write('\n');
        }

        out.close();
    }
}
