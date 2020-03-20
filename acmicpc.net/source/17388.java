// 17388. 와글와글 숭고한
// 2019.08.11
// 입문용

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Main {
	public static void main(String[] args) throws IOException {
		BufferedReader bf = new BufferedReader(new InputStreamReader(System.in));
		String s = bf.readLine();
		String line[] = s.split(" ");
		int a = Integer.parseInt(line[0]);
		int b = Integer.parseInt(line[1]);
		int c = Integer.parseInt(line[2]);
		if (a + b + c >= 100) {
			System.out.println("OK");
		} else {
			int minCnt = Math.min(Math.min(a, b), c);
			if (minCnt == a) {
				System.out.println("Soongsil");
			} else if (minCnt == b) {
				System.out.println("Korea");
			} else {
				System.out.println("Hanyang");
			}
		}
	}
}
