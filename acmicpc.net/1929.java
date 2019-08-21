// 1929. 소수 구하기
// 2019.08.21
// 수학
import java.io.*;
import java.util.Arrays;

public class Main {
	public static void main(String[] args) throws IOException {

		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

		String s[] = br.readLine().split(" ");
		int m = Integer.parseInt(s[0]);
		int n = Integer.parseInt(s[1]);

		// 에라토스테네스의 체
		Boolean prime[] = new Boolean[n + 1];
		Arrays.fill(prime, true);
		prime[1] = false;
		for (int i = 2; i * i <= n; i++) {
			if (prime[i]) {
				for (int j = i * i; j <= n; j += i) {
					prime[j] = false;
				}
			}
		}

		for (int i = m; i <= n; i++) {
			if (prime[i]) {
				System.out.println(i);
			}
		}
	}
}
