import java.util.*;
public class Main
{
	public static void main(String[] args) {
	   Scanner scanner=new Scanner(System.in);
	    int n=scanner.nextInt();
	    while(n-- > 0){
	        String s="";
	        int f=scanner.nextInt();
	        for(int i=1;i<=f;i++){
	            s+=String.valueOf(i);
	        }
	        char[] numbers=s.toCharArray();
	        for(int k=0;k<10;k++){
	            int count=0;
	            for(char num:numbers){
	                if((num-48)==k) count++;
	            }
	            if(k!=9)
	                System.out.print(count+" ");
	            else
	                System.out.println(count);
	        }
	    }
	}
}