/**
 * Implementation for AdjustableTime
 *
 * @author Paul Watts
 * @date March, 2021
 * @version 1.0
 */

public class AdjustableTime extends Time implements AdjustableTimeInterface {
  public boolean incHour() {
    boolean overflow = false;

    this.hour++;
    if (this.hour == 24) {
      this.hour = 0;
      overflow = true;
    }

    return overflow;
  }

  public boolean incMinute() {
    boolean overflow = false;

    this.minute++;
    if (this.minute == 60) {
      this.minute = 0;
      overflow = true;
    }

    return overflow;
  }

  public boolean incSecond() {
    boolean overflow = false;

    this.second++;
    if (this.second == 60) {
      this.second = 0;
      overflow = true;
    }

    return overflow;
  }
}
