// 4613. Quicksum
// 2019.08.21
// 문자열 처리
import java.io.*;

public class Main {
	public static void main(String[] args) throws IOException {

		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

		while(true)
		{
			String s = br.readLine();
			if(s.equals("#")) {
				break;
			}
			int ans = 0;
			for(int i=0;i<s.length();i++) {
				if(s.charAt(i)!=' ') {
					ans+=(i+1)*(s.charAt(i)-'A'+1);
				}
			}
			System.out.println(ans);
		}
	}
}
