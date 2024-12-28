
package Assignment_3.Answr_4;

public class Bowler extends Player{
    private int wicket,match;
    Bowler(String name,String address,String number,String status,int wicket,int match)
    {
        super(name,address,number,status);
        this.wicket=wicket;
        this.match=match;
    }
    
    @Override
    public void average()
    {
        int avewic=wicket/match;
        System.out.println("Total wickets : "+wicket+"\nMatches : "+match);
        System.out.println("Average wickets : "+avewic);
    }
    @Override
    public String toString()
    {
        return "\nThe class name is Bowler.";
    }
}
