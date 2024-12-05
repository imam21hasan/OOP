
package Super_Keyword_2;

public class B extends A{
    int gear;
    B(String n,double w,int g)
    {
        super(n,w);
        gear=g;
    }
    @Override
    void show()
    {
        super.show();
        System.out.println("Gear : " +gear);
        System.out.print("\n");
    }
}
