// 5717. 상근이의 친구들
// 2019.09.05
// 입문용
import java.io.*;

public class Main {

	public static void main(String[] args) throws NumberFormatException, IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

		while(true) {
			String s[] = br.readLine().split(" ");
			int a = Integer.parseInt(s[0]);
			int b = Integer.parseInt(s[1]);

			if(a==0 && b==0) {
				break;
			}

			System.out.println(a+b);
		}

	}
}
