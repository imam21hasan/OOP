
package Assignment_3.Answr_4;

public abstract class Player {
    private String name,address,number,status;
    Player(String name,String address,String number,String status)
    {
        this.name=name;
        this.address=address;
        this.number=number;
        this.status=status;
    }
    void show()
    {
        System.out.println("Name : "+name+"\nContact address : "+address);
        System.out.println("Telephone number : "+number+"\nStatus : "+status);
    }
    abstract void average();
    
}
