// 3004. 체스판 조각
// 2019.08.26
// 입문용
import java.io.*;

public class Main {
	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

		int n = Integer.parseInt(br.readLine());

		if (n % 2 == 1) {
			int k = (n + 1) / 2;
			System.out.println(k * (k + 1));
		} else {
			int k = n / 2;
			System.out.println((k + 1) * (k + 1));
		}

	}
}
