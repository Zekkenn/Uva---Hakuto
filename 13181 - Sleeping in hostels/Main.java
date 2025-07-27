import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;

public class Main {

    public static void main(String[] args) throws IOException {
        BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
        OutputStreamWriter out = new OutputStreamWriter(System.out);

        String beds = in.readLine();

        while (beds != null && !beds.isEmpty()) {

            beds = beds.trim();

            int maxDistance = 0, base = 0;
            for (int i = 0; i < beds.length(); i++) {
                if (beds.charAt(i) == 'X') {

                    if (base == 0 && i > 0 && beds.charAt(0) != 'X') {
                        maxDistance = i - 1;
                    } else {
                        int totalDistance = i - base - 1;
                        int totalBeds = totalDistance / 2 - (totalDistance == 0 ? 0 : 1 - totalDistance % 2);
                        maxDistance = Math.max(maxDistance, totalBeds);
                    }

                    base = i;
                }
            }

            if (beds.charAt(beds.length() - 1) != 'X') {
                maxDistance = Math.max(maxDistance, beds.length() - 1 - (base + 1));
            }

            out.write(maxDistance + "\n");

            beds = in.readLine();
        }

        out.close();
    }
}
