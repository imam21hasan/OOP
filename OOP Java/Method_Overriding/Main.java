
package Method_Overriding;

public class Main {
    public static void main(String[] args)
    {
        B ob=new B();
        ob.name="SHAWON";
        ob.age=20;
        ob.dept="CSE";
        ob.show();
        
        A ob1=new A();
        ob1.name="SHWADHEEN";
        ob1.age=22;
        ob1.show();
    }
}
