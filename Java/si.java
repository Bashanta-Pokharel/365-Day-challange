public class si
{
public static void main(String[]arg) 
{
double p=Double.parseDouble(arg[0]);
double t=Double.parseDouble(arg[1]);
double r=Double.parseDouble(arg[2]);
double si=(p*t*r)/100;
System.out.println(" the simple interest of given data is="+si);
// compund interest
double ci=p*Math.pow((1+r/100),t)-p;
System.out.println(" the compound interest of given data is="+ci);

}
}