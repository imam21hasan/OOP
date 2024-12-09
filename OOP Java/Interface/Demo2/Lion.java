
package Interface.Demo2;

public class Lion implements Animal_2{  //or implements Animal,Animal_2
    @Override
    public void show()
    {
        System.out.println("This is Animal");
    }
    @Override
    public void display()
    {
        System.out.println("This is Animal_2");
    }
}
