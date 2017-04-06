import java.io.*;

public class Main {
	public static BufferedReader in = new  BufferedReader(new InputStreamReader(System.in));
	public static BufferedWriter out = new BufferedWriter(new OutputStreamWriter(System.out));
	public static void main(String[] args) throws Throwable{
		int a = Integer.parseInt(in.readLine()); long res = 0;
		for (int i = 0; i < a; i++){
			res = (Integer.parseInt(in.readLine())*315)+36962;
			res = (res < 0)? res*-1 : res;
			out.write(res/10%10+"\n");
		}
		out.close();
	}

}
