// 15059. Hard choice
// 2019.08.21
// 입문용, 영어 문제
import java.io.*;

public class Main {
	public static void main(String[] args) throws IOException {

		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		String available[] = br.readLine().split(" ");
		String request[] = br.readLine().split(" ");

		int ans = 0;
		for (int i = 0; i < 3; i++) {
			int cnt = Integer.parseInt(request[i]) - Integer.parseInt(available[i]);

			if (cnt > 0) {
				ans += cnt;
			}
		}
		System.out.println(ans);
	}
}
