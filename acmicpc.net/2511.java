// 2511. 카드놀이
// 2019.08.23
// 입문용
import java.io.*;

public class Main {
	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

		String a[] = br.readLine().split(" ");
		String b[] = br.readLine().split(" ");

		int aScore = 0;
		int bScore = 0;
		int last = -1;
		for (int i = 0; i < a.length; i++) {
			if (Integer.parseInt(a[i]) > Integer.parseInt(b[i])) {
				aScore += 3;
				last = 0;
			} else if (Integer.parseInt(a[i]) < Integer.parseInt(b[i])) {
				bScore += 3;
				last = 1;
			} else {
				aScore++;
				bScore++;
			}
		}
		System.out.println(aScore + " " + bScore);
		if (aScore > bScore) {
			System.out.println("A");
		} else if (aScore < bScore) {
			System.out.println("B");
		} else {
			if (last == 0) {
				System.out.println("A");
			} else if (last == 1) {
				System.out.println("B");
			} else {
				System.out.println("D");
			}
		}
	}
}
