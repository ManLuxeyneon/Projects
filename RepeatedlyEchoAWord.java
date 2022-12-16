package uc.css.ninal.java.prelim.chap;
import java.util.Scanner;
public class RepeatedlyEchoAWord
{
public static void main (String[] args)
{
Scanner input= new Scanner(System.in);
int times;
String inputString;
int w= 0;

{
   System.out.println("Enter a Word: " );
   inputString = input.next();
   times = inputString.length();
      
 }
while (times >= w )

{
   for( w = 1; w <= times; w++)
   System.out.println(inputString);
   }

}
}  