// 2752. 세 수 정렬
// 2019.09.03
// 입문용
import java.io.*;

public class Main {

	public static void main(String[] args) throws NumberFormatException, IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

		String s[] = br.readLine().split(" ");
		int a = Integer.parseInt(s[0]);
		int b = Integer.parseInt(s[1]);
		int c = Integer.parseInt(s[2]);

		int min = Math.min(Math.min(a, b), c);
		int max = Math.max(Math.max(a, b), c);
		int sum = a + b + c;
		System.out.println(min + " " + (sum - max - min) + " " + max);
	}
}
