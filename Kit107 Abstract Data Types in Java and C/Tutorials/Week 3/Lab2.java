/**
 * Class to illustrate implementation of time
 * 
 * @author Julian Dermoudy
 * @version 28/2/18
 * 
 * FILE IS COMPLETE -- NO ALTERATIONS REQUIRED
 */

import java.util.*;

public class Lab2
{
    public static void main(String args[])
    {
        DateAndTime now;  // the current time
        GregorianCalendar c;  // the calendar
        
        c=new GregorianCalendar();
        now = new DateAndTime();
        
        now.setDateAndTime(c.get(Calendar.DAY_OF_MONTH),c.get(Calendar.MONTH)+1,c.get(Calendar.YEAR),c.get(Calendar.HOUR_OF_DAY),c.get(Calendar.MINUTE),c.get(Calendar.SECOND));
        while (true)
        {
            try
            {
                Thread.sleep(1000);
            }
            catch (InterruptedException ex)
            {
                break;
            }
            now.incSecond();
            System.out.print("\r                                          \r"+now.toString());
        }
    }
}
