package biblioteca;
public class AppForno {
    public static void main (String[] args) {
        Forno f = new Forno("GE", "f505", 60, 120);
        f.assar(200);
        f.desligar();
        System.out.println();
    }
}
