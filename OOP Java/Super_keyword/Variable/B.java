
package Super_keyword.Variable;

public class B extends A{
    int x=20;
    
    void show()
    {
        System.out.println("Base value : " +super.x);  // for Base instance variable
        System.out.println("Derived value : " +x);   // for Derived instance variable
    }
}
