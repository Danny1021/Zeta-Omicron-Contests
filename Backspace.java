import java.util.*;

public class Main {

	public static void main(String[] args) {
		
		Scanner scan = new Scanner(System.in);
		
		String str = scan.next();
		Stack<Character> stack = new Stack<>();
		
		for (int i = 0; i < str.length(); i++) {
			if (str.charAt(i) != '<')
				stack.add(str.charAt(i));
			else
				stack.pop();
		}
		
		char[] chars = new char[stack.size()];
		
		for (int i = chars.length-1; i >= 0; i--)
			chars[i] = stack.pop();
		
		String ans = new String(chars);
		
		System.out.println(ans);
		
		scan.close();
	}
	
}
