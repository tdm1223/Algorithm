// 4949. 균형잡힌 세상
// 2019.08.21
// 문자열 처리, 자료구조
import java.io.*;
import java.util.Stack;

public class Main {
	public static void main(String[] args) throws IOException {

		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		Stack<Character> stack = new Stack<>();
		while (true) {
			stack.clear();
			String s = br.readLine();
			if (s.equals(".")) {
				break;
			}
			Boolean flag = true;
			for (int i = 0; i < s.length(); i++) {
				if (!flag) {
					break;
				}
				switch (s.charAt(i)) {
				case '(':
					stack.push('(');
					break;
				case ')':
					if (stack.size() == 0 || stack.peek() != '(') {
						flag = false;
					} else {
						stack.pop();
					}
					break;
				case '[':
					stack.push('[');
					break;
				case ']':
					if (stack.size() == 0 || stack.peek() != '[') {
						flag = false;
					} else {
						stack.pop();
					}
					break;
				}
			}
			if(stack.size()!=0) {
				flag=false;
			}
			if (flag) {
				System.out.println("yes");
			} else {
				System.out.println("no");
			}
		}
	}
}
