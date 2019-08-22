// 14579. 덧셈과 곱셈
// 2019.08.22
// 수학
import java.io.*;

public class Main {
	public static void main(String[] args) throws IOException {

		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		String s[] = br.readLine().split(" ");
		int a = Integer.parseInt(s[0]);
		int b = Integer.parseInt(s[1]);

		long ans = 1;
		for (int i = a; i <= b; i++) {
			long k = (i * (i + 1)) / 2;
			k %= 14579;
			ans *= k;
			ans %= 14579;
		}
		System.out.println(ans);
	}
}
