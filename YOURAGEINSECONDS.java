package uc.css.ninal.java.prelim;
import java.util.Scanner;
public class YOURAGEINSECONDS
{
public static void main (String [] args)
{
   Scanner scan = new Scanner(System.in);
   int age, years = 365 , months = 12, days = 31;
   int hoursperday = 24, minsperhour = 60, secondspermin = 60;
   
   System.out.println("Enter your age: ");
   age = scan.nextInt();
    
   
    if (age <= 100)
   {
      System.out.println("In year: " + age + " years.");
      System.out.println("In months: " + months * years * age + " months.");
      System.out.println("In days: "  + months * years * days * hoursperday + age + " days.");
      System.out.println("In hours: "  + months * years * days * hoursperday * minsperhour + age + " hours.");
      System.out.println("In seconds: "+ (months * years * days) + (hoursperday * minsperhour * secondspermin) * age+  " seconds.");
   }



}
}