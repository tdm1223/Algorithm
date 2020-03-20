// 4714. Lunacy
// 2019.08.21
// 입문용, 영어 문제
import java.io.*;

public class Main {
	public static void main(String[] args) throws IOException {

		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

		while(true)
		{
			double weight = Double.parseDouble(br.readLine());
			if(weight<0) {
				break;
			}
			System.out.printf("Objects weighing %.2f on Earth will weigh %.2f on the moon.\n",weight,weight*0.167f);
		}
	}
}
