// 2083. 럭비 클럽
// 2019.08.14
// 문자열 처리

import java.io.*;

public class Main {
	public static void main(String[] args) throws IOException {

		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		while (true) {
			String[] s = br.readLine().split(" ");
			String name = s[0];
			int age = Integer.parseInt(s[1]);
			int weight = Integer.parseInt(s[2]);

			if (name.equals("#")) {
				break;
			}
			// 나이가 17을 넘거나 몸무게가 80이상이면 성인부
			if (age > 17 || weight >= 80) {
				System.out.println(name + " Senior");
			} else {
				System.out.println(name + " Junior");
			}
		}
	}
}
