/**
 * Interface for DateAndTime
 *
 * @author Paul Watts
 * @date March, 2021
 * @version 1.0
 */


public interface DateAndTimeInterface
{
    //public DateAndTime();
    //public DateAndTime(int d,int m,int y,int h,int n,int s);
    public void setDateAndTime(int d,int m,int y,int h,int n,int s) throws NumberFormatException;
    public String toString();
    public void setTime(int h,int n,int s) throws NumberFormatException;
    public String timeToString();
    public String timeToMilitaryString();
    public boolean incHour();
    public boolean incMinute();
    public boolean incSecond();
    public void setDate(int d,int m,int y) throws NumberFormatException;
    public String dateToString();
    public boolean incDay();
    public boolean incMonth();
    public boolean incYear();
}
