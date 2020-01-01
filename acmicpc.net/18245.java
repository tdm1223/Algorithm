// 18245. 이상한 나라의 암호
// 2020.01.01
// 반복문
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Main {

	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		int cnt = 2;
		while(true)
		{
			String s = br.readLine();
			if(s.equals("Was it a cat I saw?"))
			{
				break;
			}
			for(int i=0;i<s.length();i+=cnt)
			{
				System.out.print(s.charAt(i));
			}
			cnt++;
			System.out.println();
		}
	}
}
