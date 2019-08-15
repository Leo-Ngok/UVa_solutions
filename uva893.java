import java.io.*;
import java.util.*;
public class Main
{
    public static void main(String[] args) 
	{
	    Scanner s=new Scanner(System.in);
		while(true) 
		{
			int incr=s.nextInt();
			int day=s.nextInt();
			int month=s.nextInt();
			int year=s.nextInt();
			if(incr==0&&day==0&&month==0&&year==0) break;
			Calendar c=new GregorianCalendar(year,month-1,day);
			c.add(Calendar.DATE, incr);
			System.out.println(c.get(Calendar.DAY_OF_MONTH)+" "+(c.get(Calendar.MONTH)+1)+" "+c.get(Calendar.YEAR));
		}
		s.close();
	}
}