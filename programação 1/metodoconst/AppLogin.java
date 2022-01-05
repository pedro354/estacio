package metodoconst;

public class AppLogin {
    /**
     *
     */
    private static final String CARNEIRO5 = "carneiro5";

    public static void main (String[] args) {
        Login lg1 = new Login(CARNEIRO5, "123456");
        System.out.println("O seu nome é: "+ lg1.getNome());
        System.out.println("O seu nivel de acesso é: "+ lg1.getNivelAcesso());
        Login lg2 = new Login("KKK", "000000");
        System.out.println("O seu nome é: "+ lg2.getNome());
        System.out.println("O seu nivel de acesso é: "+ lg2.getNivelAcesso());
        Login lg3 = new Login("Pereira", "246810", 2000);
        System.out.println("O seu nome é: " + lg3.getNome());
        System.out.println("O seu nivel de acesso é: "+lg3.getNivelAcesso());
    }
}
 