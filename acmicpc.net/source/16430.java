// 16430. 제리와 톰
// 2019.08.24
// 입문용
import java.io.*;

public class Main {
	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

		String s[] = br.readLine().split(" ");
		int a = Integer.parseInt(s[0]);
		int b = Integer.parseInt(s[1]);

		System.out.println(b-a+" "+b);
	}
}
