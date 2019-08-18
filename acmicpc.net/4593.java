// 4593. Rock, Paper, Scissors
// 2019.08.18
// 문자열 처리, 영어 문제
import java.io.*;

public class Main {
	public static void main(String[] args) throws IOException {

		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		while (true) {
			String first = br.readLine();
			String second = br.readLine();

			if (first.equals("E") && second.equals("E")) {
				break;
			}

			int p1 = 0;
			int p2 = 0;

			for (int i = 0; i < first.length(); i++) {
				switch (first.charAt(i)) {
				case 'R':
					if (second.charAt(i) == 'S') {
						p1++;
					} else if (second.charAt(i) == 'P') {
						p2++;
					}
					break;
				case 'S':
					if (second.charAt(i) == 'P') {
						p1++;
					} else if (second.charAt(i) == 'R') {
						p2++;
					}
					break;
				case 'P':
					if (second.charAt(i) == 'R') {
						p1++;
					} else if (second.charAt(i) == 'S') {
						p2++;
					}
					break;
				}
			}
			System.out.println("P1: " + p1);
			System.out.println("P2: " + p2);
		}
	}
}
