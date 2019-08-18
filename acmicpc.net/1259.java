// 1259. 팰린드롬수
// 2019.08.18
// 입문용
import java.io.*;

public class Main {
	public static void main(String[] args) throws IOException {

		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

		while(true)
		{
			String s = br.readLine();
			if(s.equals("0")) {
				break;
			}
			Boolean flag = true;
			for(int i=0;i<s.length();i++)
			{
				if(s.charAt(i)!=s.charAt(s.length()-i-1)) {
					flag=false;
					break;
				}
			}
			if(flag) {
				System.out.println("yes");
			}else {
				System.out.println("no");
			}

		}
	}
}
