import java.util.*;

public class Main {
	
	public static void main(String[] args) {
		
		Scanner scan = new Scanner(System.in);
		
		while(true) {
			int numCount = scan.nextInt();
			if (numCount == 0)
				break;
			
			PriorityQueue<Integer> queue = new PriorityQueue<>();
			for (int i = 0; i < numCount; i++) 
				queue.add(scan.nextInt());
			
			int sum = 0;
			while(queue.size() != 1) {
				int var = queue.poll() + queue.poll();
				sum += var;
				queue.add(var);
			}
			System.out.println(sum);
		}
		scan.close();
	}
	
}
