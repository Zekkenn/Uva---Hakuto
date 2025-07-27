import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.util.ArrayList;
import java.util.List;

public class Main {

    public static void main(String[] args) throws IOException {
        BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
        OutputStreamWriter out = new OutputStreamWriter(System.out);

        int cases = Integer.parseInt(in.readLine().trim());

        for (int c = 1; c <= cases; c++) {

            int phoneNumbers = Integer.parseInt(in.readLine().trim());

            List<String> data = new ArrayList<String>();
            for (int j = 0; j < phoneNumbers; j++) {
                data.add(in.readLine().trim());
            }

            String base = in.readLine().trim();

            out.write(String.format("Case %d:\n", c));

            for (String phone : data) {

                int mistakes = 0;
                for (int i = 0; i < phone.length(); i++) {
                    if (phone.charAt(i) != base.charAt(i)) mistakes++;
                    if (mistakes > 1) break;
                }

                if (mistakes <= 1) out.write(String.format("%s\n", phone));
            }
        }

        out.close();
    }

}
