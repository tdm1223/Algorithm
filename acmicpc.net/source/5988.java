// 5988. 홀수일까 짝수일까
// 2019.08.26
// 입문용
import java.io.*;

public class Main {
	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

		int n = Integer.parseInt(br.readLine());

		for (int i = 0; i < n; i++) {
			// 숫자의 범위가 10^60까지이므로 string으로 처리한다.
			String s = br.readLine();
			int last = s.charAt(s.length() - 1);
			if (last % 2 == 0) {
				System.out.println("even");
			} else {
				System.out.println("odd");
			}
		}
	}
}
