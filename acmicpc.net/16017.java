// 16017. Telemarketer or not?
// 2019.08.24
// 입문용, 영어 문제

import java.io.*;

public class Main {
	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

		int a = Integer.parseInt(br.readLine());
		int b = Integer.parseInt(br.readLine());
		int c = Integer.parseInt(br.readLine());
		int d = Integer.parseInt(br.readLine());

		if ((a == 8 || a == 9) && (d == 8 || d == 9) && (b == c)) {
			System.out.println("ignore");
		} else {
			System.out.println("answer");
		}
	}
}
