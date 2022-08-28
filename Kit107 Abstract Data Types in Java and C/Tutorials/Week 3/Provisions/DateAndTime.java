/**
 * Implementation of DateAndTime
 *
 * @author Julian Dermoudy
 * @version 28/2/18
 */


import java.text.DecimalFormat;


public class DateAndTime implements DateAndTimeInterface
{
    protected final int MIN_YEAR=1;
    protected final int MAX_YEAR=3000;
    
    protected int day,month,year;
    protected AdjustableTime time;
    
    public DateAndTime()
    {
        time=new AdjustableTime();
        this.setDateAndTime(1,1,MAX_YEAR,0,0,0);
    }
    
    public DateAndTime(int d,int m,int y,int h,int n,int s)
    {
        this.setDateAndTime(d,m,y,h,n,s);
    }
    
    public void setDateAndTime(int d,int m,int y,int h,int n,int s) throws NumberFormatException
    {
        this.setDate(d,m,y);
        time.setTime(h,n,s);
    }
    
    public String toString()
    {
        return this.dateToString() + ", " + this.timeToString();
    }
    
    public void setTime(int h,int n,int s) throws NumberFormatException
    {
        time.setTime(h,n,s);
    }
    
    public String timeToString()
    {
        return time.toString();
    }
    
    public String timeToMilitaryString()
    {
        return time.toMilitaryString();
    }
    
    public boolean incHour()
    {
        if (time.incHour())
        {
            return incDay();
        }
        
        return false;
    }
    
    public boolean incMinute()
    {
        if (time.incMinute())
        {
            return incHour();
        }
        
        return false;
    }
    
    public boolean incSecond()
    {
        if (time.incSecond())
        {
            return incMinute();
        }
        
        return false;
    }
    
    public void setDate(int d,int m,int y) throws NumberFormatException
    { 
        final int DAYS[]={31,0,31,30,31,30,31,31,30,31,30,31};
        
        int maxDay;
        
        if ((y<MIN_YEAR) || (y>MAX_YEAR))
        {
            throw new NumberFormatException();
        }
        
        if ((m<1) || (m>12))
        {
            throw new NumberFormatException();
        }
        
        if (m!=2)
        {
            maxDay=DAYS[m-1];
        }
        else
        {
            if (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0))
            {
                maxDay=29;
            }
            else
            {
                maxDay=28;
            }
        }
        
        if ((d<1) || (d>maxDay))
        {
            throw new NumberFormatException();
        }
        
        this.year=y;
        this.month=m;
        this.day=d;
    }
    
    public String dateToString()
    {
        final String MONTHS[]={"January","February","March","April","May","June","July","August","September","October","November","December"};
        
        String result;
        
        result=MONTHS[this.month-1];
        result+=" " + this.day;
        switch (this.day)
        {
            case  1:
            case 21:
            case 31: result+="st";
            break;
            case  2:
            case 22: result+="nd";
            break;
            case  3:
            case 23: result+="rd";
            break;
            default: result+="th";
        }
        
        result+=" " + this.year;
        return result;
    }
    
    public boolean incDay()
    {
        final int DAYS[]={31,0,31,30,31,30,31,31,30,31,30,31};
        
        int maxDay;
        boolean overflow=false;
        
        if (this.month!=2)
        {
            maxDay=DAYS[this.month-1];
        }
        else
        {
            if (((this.year % 4 == 0) && (this.year % 100 != 0)) || (this.year % 400 == 0))
            {
                maxDay=29;
            }
            else
            {
                maxDay=28;
            }
        }
        
        this.day++;
        
        if (this.day > maxDay)
        {
            this.day=1;
            overflow=true;
        }
        
        if (overflow)
        {
            return incMonth();
        }
        return overflow;
    }
    
    public boolean incMonth()
    {
        boolean overflow=false;
        
        this.month++;
        if (this.month==13)
        {
            this.month=1;
            overflow=true;
        }
        
        if (overflow)
        {
            return incYear();
        }
        return overflow;
    }
    
    public boolean incYear()
    {
        boolean overflow=false;
        
        this.year++;
        if (this.year==MAX_YEAR+1)
        {
            this.year=MIN_YEAR;
            overflow=true;
        }
        
        return overflow;
    }
}

