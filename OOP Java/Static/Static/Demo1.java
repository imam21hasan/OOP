
package Static;

public class Demo1 {
    String name;
    int id;
    static String var="CSTU";
    
    Demo1(String n,int i)
    {
        name=n;
        id=i;
    }
    void show()
    {
        System.out.println(name +"\t"+id +"\t"+var);
    }
}
