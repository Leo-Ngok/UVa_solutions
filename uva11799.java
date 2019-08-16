import java.util.*;
public class Main
{
    public static void main(String[] args) 
	{
		
		Scanner scanner=new Scanner(System.in);
		int n=scanner.nextInt();
		for(int i=1;i<=n;i++) {
			List<Integer> speed=new ArrayList<>();
			int m=scanner.nextInt();
			for(int j=0;j<m;j++)
				speed.add(scanner.nextInt());
			Collections.sort(speed);
			System.out.println("Case "+i+": "+speed.get(speed.size()-1));
		}
		scanner.close();
	}
}
