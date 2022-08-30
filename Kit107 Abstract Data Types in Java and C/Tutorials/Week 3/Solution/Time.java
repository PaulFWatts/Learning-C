/**
 * Implementation for Time
 * 
 * @author Julian Dermoudy
 * @version 7/3/18
 * 
 * FILE IS COMPLETE -- NO ALTERATIONS REQUIRED
 */

import java.text.DecimalFormat;

public class Time implements TimeInterface
{
    private static final DecimalFormat FMT=new DecimalFormat("00");
    
    protected int hour;
    protected int minute;
    protected int second;
    
    /**
     * Constructor -- midnight
     * @author Julian Dermoudy
     * @version 28/2/18
     */
    public Time()
    { 
        setTime( 0, 0, 0 ); 
    }
    
    /**
     * Alter hour, minute, and second
     * @param h new value for hour
     * @param m new value for minute
     * @param s new value for second
     * @author Julian Dermoudy
     * @version 28/2/18
     */
    public void setTime(int h, int m, int s)
    {
        hour = h; 
        minute = m; 
        second = s;
    }
    
    /**
     * Find printable form of time
     * @return String form of time for printing etc.
     * @author Julian Dermoudy
     * @version 28/2/18
     */
    public String toString()
    { 
        String r;
        
        if (hour >= 12) {
            if (hour == 12)
                r="12";
            else
                r=FMT.format(hour-12);
            r=r+":"+FMT.format(minute)+":"+FMT.format(second)+" PM";
        }
        else {
            if (hour == 0)
                r="12";
            else
                r=FMT.format(hour);
            r=r+":"+FMT.format(minute)+":"+FMT.format(second)+" AM";
        }
        return r;
    }
    
    /**
     * Find printable form of time in 24 hour mode
     * @return String form of time in 24 hour mode for printing etc.
     * @author Julian Dermoudy
     * @version 28/2/18
     */
    public String toMilitaryString()
    { 
        return FMT.format(hour)+ ":"+FMT.format(minute)+ ":" + FMT.format(second);
    }
    
    public boolean equals(Time that)
    {
        return ((this.hour == that.hour) && (this.minute == that.minute) && (this.second == that.second));
    }
}
