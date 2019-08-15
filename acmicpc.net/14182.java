// 14182. Tax
// 2019.08.15
// 입문용, 영어 문제

import java.io.*;

public class Main {
	public static void main(String[] args) throws IOException {

		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

		while (true) {
			int num = Integer.parseInt(br.readLine());
			if (num == 0) {
				break;
			} else if (num <= 1000000) {
				System.out.println(num);
			} else if (num > 1000000 && num <= 5000000) {
				System.out.println((int) (num * 0.9));
			} else {
				System.out.println((int) (num * 0.8));
			}
		}
	}
}
