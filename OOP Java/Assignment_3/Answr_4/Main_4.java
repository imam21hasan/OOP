
package Assignment_3.Answr_4;

public class Main_4 {
    public static void main(String[] args) {
        Player ob=new Batsman("SHAWON","2/D,Chandpur","08632","Batsman",407,5);
        System.out.println(ob);
        ob.show();
        ob.average();
        
        Player ob2=new Bowler("NAYON","64/F,Gazipur","02545","Bowler",20,5);
        System.out.println(ob2);
        ob2.show();
        ob2.average();
    }
}
