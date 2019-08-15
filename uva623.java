import java.math.BigInteger;
import java.util.Scanner;
public class Main {
	static BigInteger factorial(int n) 
	{
		BigInteger s=BigInteger.ONE;
		for(int i=1;i<=n;i++) 
		{
			s=s.multiply(BigInteger.valueOf(i));
		}
		return s;
	}
	public static void main(String[] args) 
	{
		Scanner scanner=new Scanner(System.in);
		
		while(scanner.hasNext()) 
		{
			int b=scanner.nextInt();
			System.out.println(b+"!");
			System.out.println(factorial(b));
		}
		scanner.close();
	}
}