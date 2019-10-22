import java.util.*;
import java.io.*;

public class Main {

	public static void main(String[] args) throws NumberFormatException, IOException {

		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

		while (true) {
			int cards = Integer.parseInt(br.readLine());
			if (cards == 0)
				break;

			System.out.print("Discarded cards:");

			ArrayDeque<Integer> queue = new ArrayDeque<Integer>();

			for (int i = 1; i < cards+1; i++)
				queue.add(i);

			while (queue.size() != 1) {
				if (queue.size() == 2)
					System.out.println(" " + queue.poll());
				else
					System.out.print(" " + queue.poll() + ",");
				int n = queue.poll();
				queue.add(n);
			}

			if (queue.peek() == 1)
				System.out.println("\nRemaining card: " + queue.peek());
			else
				System.out.println("Remaining card: " + queue.peek());

		}
		br.close();
	}

}
