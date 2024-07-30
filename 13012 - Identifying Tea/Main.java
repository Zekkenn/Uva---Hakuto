import java.io.*;

public class Main {
  public static BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
  public static BufferedWriter out = new BufferedWriter(new OutputStreamWriter(System.out));

  public static void main(String[] args) throws Exception {
    String cad = in.readLine().trim();
    int sum;
    while (!cad.isEmpty()) {

      sum = 0;
      int base = Integer.parseInt(cad);
      for (String n: in.readLine().trim().split(" ")) {
        sum += ( Integer.parseInt(n) == base ) ? 1 : 0;
      }

      out.write(sum + "\n");
      cad = in.readLine().trim();
    }
    out.close();
  }
}
