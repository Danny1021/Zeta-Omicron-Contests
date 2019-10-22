import java.util.*;
import java.io.*;

public class Main {

	public static void main(String[] args) throws IOException {

		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

		while (true) {
			StringTokenizer st = new StringTokenizer(br.readLine());
			int jackCt = Integer.parseInt(st.nextToken());
			int jillCt = Integer.parseInt(st.nextToken());

			if (jackCt == 0 && jillCt == 0)
				break;
			
			HashSet<Integer> distinct = new HashSet<>();
			int count = 0;

			for (int i = 0; i < jackCt; i++)
				distinct.add(Integer.parseInt(br.readLine()));

			for (int i = 0; i < jillCt; i++)
				if (!distinct.add(Integer.parseInt(br.readLine())))
					count++;

			System.out.println(count);
		}
		br.close();
	}

}
