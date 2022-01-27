import java.util.Scanner;
public class Encapsulamento2 {
    public static void main (String[] args) {
        Scanner entrada = new Scanner(System.in);
        double preco = 0;
        System.out.println("Digite o preço:");
        preco = Double.parseDouble(entrada.nextLine());//no teste preco = 1000
        Tributos tributo = new Tributos();
        System.out.println("");
        tributo.imposto=-20;
        System.out.println("Imposto incorreto:");
        System.out.println("Valor do imposto[atribuição direta] = " + tributo.imposto);
        System.out.println("");
        System.out.println("Imposto correto, mas método errado");
        System.out.println("A faixa estava correta por acaso, porque 00 = 0");
        System.out.println("Valor do imposto[método errado 00]= " + tributo.calcularTipoProduto0(preco,00));
        System.out.println("");
        System.out.println("Imposto e método errados");
        System.out.println("Vallor do impsoto [método errado 11]= " + tributo.calcularTipoProduto1(preco, 11));
        System.out.println("");
        System.out.println("Imposto correto, por acaso, porque 22 foi para a última faixa");
        System.out.println("Valor a pagar[método errado 22]= " + tributo.calcularTipoProduto2(preco, 22));
        System.out.println("");
        System.out.println("Imposto e método corretos");
        System.out.println("Valor a pagar [método correto 00] = " + tributo.calcularImposto(preco, 00));
        System.out.println("");
        System.out.println("Imposto e método corretos");
        System.out.println("Valor a pagar [método correto 00] = " + tributo.calcularImposto(preco, 11));
        System.out.println("");
        System.out.println("Imposto e método corretos");
        System.out.println("Valor a pagar [método correto 00] = " + tributo.calcularImposto(preco,22));
        entrada.close();
    }
}
