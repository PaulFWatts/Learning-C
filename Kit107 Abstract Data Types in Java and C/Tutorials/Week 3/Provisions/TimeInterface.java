/**
 * Interface for Time
 * 
 * @author Julian Dermoudy
 * @version 7/3/18
 * 
 * FILE IS COMPLETE -- NO ALTERATIONS REQUIRED
 */

public interface TimeInterface
{
    //public Time();
    public void setTime(int h, int m, int s);
    public String toString();
    public String toMilitaryString();
    public boolean equals(Time t);
}
