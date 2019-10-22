import java.util.*;
import java.io.*;

public class Main {

	static int[] R = {-1, 1,  0, 0};
	static int[] C = {0 , 0, -1, 1};
	static char[][] map;
	static boolean[][] check;
	static int rows;
	static int cols;
	
	public static boolean inBounds(int r , int c) {
		return r >= 0 && r < rows && c >= 0 && c < cols;
	}
	
	public static void checkAround(int i, int j) {
		check[i][j] = true;
		for (int t = 0; t < 4; t++) {
			
			int r = i + R[t];
			int c = j + C[t];
			
			if (inBounds(r,c) && map[r][c] == '-' && !check[r][c]) {
				checkAround(r,c);
			}
		}
	}
	
	public static void main(String[] args) throws IOException {
		
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		
		int iteration = 1;
		while (true) {
			
			int stars = 0;
			String str = br.readLine();
			if (str == null)
				break;
			
			StringTokenizer st = new StringTokenizer(str);
			rows = Integer.parseInt(st.nextToken());
			cols = Integer.parseInt(st.nextToken());
			
			map = new char[rows][cols];
			check = new boolean[rows][cols];
			
			for (int r = 0; r < rows; r++)
					map[r] = br.readLine().toCharArray();
			
			for (int r = 0; r < rows; r++)
				for (int c = 0; c < cols; c++)
					if (map[r][c] == '-' && !check[r][c]) {
							checkAround(r , c);
							stars++;
					}
			
			System.out.println("Case " + iteration++ + ": " + stars);
		}
		
		br.close();
	}
	
}
