import java.util.*;
import java.io.*;

public class Main {

	public static void main(String[] args) throws NumberFormatException, IOException {
		
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		
		int cases = Integer.parseInt(br.readLine());
		
		for (int c = 1; c <= cases; c++) {
			
			StringTokenizer st = new StringTokenizer(br.readLine());
			String t1 = st.nextToken();
			String t2 = st.nextToken();
			
			st= new StringTokenizer(br.readLine());
			String t3 = st.nextToken();
			String t4 = st.nextToken();
			
			String[] times = {t1, t2, t3, t4};
			Arrays.sort(times);
			
			if (((times[0].equals(t1) && times[1].equals(t2)) || (times[0].equals(t3) && times[1].equals(t4))) && !t2.equals(t3))
				System.out.println("Case " + c + ": Hits Meeting");
			else
				System.out.println("Case " + c + ": Mrs Meeting");
			
		}
		
	}
	
}
