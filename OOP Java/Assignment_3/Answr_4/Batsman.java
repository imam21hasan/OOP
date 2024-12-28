
package Assignment_3.Answr_4;

public class Batsman extends Player{
    private double run,match;
    Batsman(String name,String address,String number,String status,double run,double match)
    {
        super(name,address,number,status);
        this.run=run;
        this.match=match;
    }
    @Override
    public void average()
    {
        double averun=run/match;
        System.out.println("Total runs : "+run+"\nMatches : "+match);
        System.out.println("Average runs : "+averun);
    }
    @Override
    public String toString()
    {
        return "The class name is Batsman.";
    }
}
