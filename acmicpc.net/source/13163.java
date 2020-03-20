// 13163. 닉네임에 갓 붙이기
// 2019.08.07
// 문자열 처리
import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);

    // 문자열 개수를 입력받는다.
		String str = in.nextLine();
		int n = Integer.parseInt(str);

    // 쪼갠다음 맨처음 음절 대신 god을 붙여 출력
		for (int i = 0; i < n; i++) {
			String s = in.nextLine();
			String params[] = s.split(" ");
			String ans="god";
			for(int j=1;j<params.length;j++)
			{
				ans+=params[j];
			}
			System.out.println(ans);
		}
		in.close();
	}
}
