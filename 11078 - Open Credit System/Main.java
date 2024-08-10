import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;

public class Main {

  private static final BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
  private static final BufferedWriter out = new BufferedWriter(new OutputStreamWriter(System.out));

  public static void main(String[] args) throws IOException {

    int students, base, n, diff;
    int cases = Integer.parseInt(in.readLine());

    while (cases > 0) {

      students = Integer.parseInt(in.readLine());
      base = Integer.parseInt(in.readLine());
      diff = Integer.MIN_VALUE;
      for (int i = 1; i < students; i++) {
        n = Integer.parseInt(in.readLine());
        if ( base - n > diff ) {
          diff = base - n;
        }
        if ( base < n ) {
          base = n;
        }
      }
      out.write(diff + "\n");
      cases--;
    }
    out.close();
  }
}
