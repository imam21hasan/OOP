
package Inheritanve1;

public class Child extends Private_Access{
    private String phone;

    public String getPhone() {
        return phone;
    }

    public void setPhone(String phone) {
        this.phone = phone;
    }
    
    void show()
    {
        System.out.println(getName());
        System.out.println(getAge());
        System.out.println(getPhone());
        System.out.print("\n");
    }
}
