/**
 * Interface for AdjustableTime
 *
 * @author Julian Dermoudy
 * @version 7/3/2018
 *
 * FILE IS COMPLETE -- NO ALTERATIONS REQUIRED
 */

public interface AdjustableTimeInterface
{ 
    //public AdjustableTime();
    public void setTime(int h, int m, int s) throws NumberFormatException;
    public String toString();
    public String toMilitaryString();
    public boolean equals(Time t);
    public boolean incHour();
    public boolean incMinute();
    public boolean incSecond();
}
