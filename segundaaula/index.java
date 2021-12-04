package segundaaula;

public class index {
    public static void main(String[]args){
        double halo;
        double mgs;
        halo = 69.99;
        mgs = 60.50;
        double total = halo + mgs;
        System.out.println("o preco total é" +total);

        if (total < 120.00){
            System.out.println("o preço é bom");
        } else {
            System.out.println("o jogo esta caro");
        }
}
}