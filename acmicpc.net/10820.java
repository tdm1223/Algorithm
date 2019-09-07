// 10820. 문자열 분석
// 2019.09.07
// 문자열 처리
import java.util.Scanner;

public class Main {
	public static void main(String args[]) {
		Scanner sc = new Scanner(System.in);
		while (sc.hasNextLine()) {
			String s = sc.nextLine();
			int lower = 0; // 소문자
			int upper = 0; // 대문자
			int digit = 0; // 숫자
			int space = 0; // 공백
			for (int i = 0; i < s.length(); i++) {
				if ('a' <= s.charAt(i) && s.charAt(i) <= 'z') {
					lower++;
				} else if ('A' <= s.charAt(i) && s.charAt(i) <= 'Z') {
					upper++;
				} else if ('0' <= s.charAt(i) && s.charAt(i) <= '9') {
					digit++;
				} else if (s.charAt(i) == ' ') {
					space++;
				}
			}
			System.out.println(lower + " " + upper + " " + digit + " " + space);
		}
		sc.close();
	}
}
