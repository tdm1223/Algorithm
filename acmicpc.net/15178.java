// 15178. Angles
// 2019.08.21
// 입문용, 영어 문제
import java.io.*;

public class Main {
	public static void main(String[] args) throws IOException {

		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		int n = Integer.parseInt(br.readLine());
		for (int i = 0; i < n; i++) {
			String nums[] = br.readLine().split(" ");
			int a = Integer.parseInt(nums[0]);
			int b = Integer.parseInt(nums[1]);
			int c = Integer.parseInt(nums[2]);

			if (a + b + c < 180 || a + b + c > 180) {
				System.out.println(a + " " + b + " " + c + " Check");
			} else {
				System.out.println(a + " " + b + " " + c + " Seems OK");
			}
		}
	}
}
