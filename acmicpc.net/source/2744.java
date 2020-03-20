// 2744. 대소문자 바꾸기
// 2019.09.03
// 문자열 처리
import java.io.*;

public class Main {

	public static void main(String[] args) throws NumberFormatException, IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

		String s = br.readLine();

		for (int i = 0; i < s.length(); i++) {
			if(s.charAt(i)>='a' && s.charAt(i)<='z') {
				System.out.print((char)(s.charAt(i)+('A'-'a')));
			}else {
				System.out.print((char)(s.charAt(i)+('a'-'A')));
			}
		}
	}
}
