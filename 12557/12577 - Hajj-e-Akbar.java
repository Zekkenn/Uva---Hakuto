import java.io.*;


public class Main {
	public static BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
	public static BufferedWriter out = new BufferedWriter(new OutputStreamWriter(System.out));
	public static void main(String[] args) throws Exception{
		String cad = in.readLine().trim(); int i = 0;
		while (!cad.equals("*")){
			i++;
			if (cad.equals("Hajj")){out.write("Case "+i+": Hajj-e-Akbar\n");}
			else{out.write("Case "+i+": Hajj-e-Asghar\n");}
			cad = in.readLine().trim();
		}
		out.close();
	}

}
