import java.text.ParseException;
import java.text.SimpleDateFormat;
import java.util.*;

public class Main {

    public static void main(String[] args) throws ParseException {

        Scanner scan = new Scanner(System.in);

        String day = scan.next();
        String month = scan.next();
        if (day.length() == 1)
            day = "0" + day;
        if (month.length() == 1)
            month = "0" + month;

        String date = day + "/" + month + "/2009";

        SimpleDateFormat f = new SimpleDateFormat("dd/MM/yyyy");
        Date d = f.parse(date);

        Calendar cal = Calendar.getInstance();
        cal.setTime(d);
        int ans = cal.get(Calendar.DAY_OF_WEEK);

        if (ans == 1)
            System.out.println("Sunday");
        else if (ans == 2)
            System.out.println("Monday");
        else if (ans == 3)
            System.out.println("Tuesday");
        else if (ans == 4)
            System.out.println("Wednesday");
        else if (ans == 5)
            System.out.println("Thursday");
        else if (ans == 6)
            System.out.println("Friday");
        else if (ans == 7)
            System.out.println("Saturday");

    }

}
