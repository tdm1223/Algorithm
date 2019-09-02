// 1264. 모음의 개수
// 2019.09.02
// 문자열 처리
import java.io.*;

public class Main {

	public static void main(String[] args) throws NumberFormatException, IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

		while(true)
		{
			String s = br.readLine().toLowerCase();
			if(s.equals("#")) {
				break;
			}
			int cnt = 0;
			for(int i=0;i<s.length();i++) {
				switch(s.charAt(i)) {
				case 'a':
				case 'e':
				case 'i':
				case 'o':
				case 'u':
					cnt++;
					break;
				}
			}
			System.out.println(cnt);
		}
	}
}
