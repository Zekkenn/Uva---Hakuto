import java.io.*;


public class Main {
	public static BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
	public static BufferedWriter out = new BufferedWriter(new OutputStreamWriter(System.out));
	public static void main(String[] args) throws Exception{
		int cas = Integer.parseInt(in.readLine().trim()); String[] cad; int cont = 0;
		for (int i = 0; i < cas; i++){
			cad = in.readLine().split(" ");
			if (cad[0].charAt(0) == 'd'){cont+= Integer.parseInt(cad[1]);}
			else{out.write(cont+"\n");}
		}
		out.close();
	}

}
