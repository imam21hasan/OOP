
package This_Keyword;

public class this_Method_Call {
    void show()
    {
        System.out.println("This is from show method");
    }
    void display()
    {
        this.show();
        System.out.println("This is from display method");
    }
    
    public static void main(String[] args) {
        this_Method_Call ob=new this_Method_Call();
        ob.display();
    }
}

